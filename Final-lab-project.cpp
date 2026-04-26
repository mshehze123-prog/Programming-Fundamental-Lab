#include <dummy.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH110X.h>
#include <WiFi.h>
#include <WiFiClientSecure.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>

#define i2c_Address 0x3c
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1

Adafruit_SH1106G display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

const int ledPin = 13;
const int btnDown = 12;
const int btnUp = 14;

const char* ssid = "WIFI-name";
const char* password = "WIFI_pass";
const String apiKey = "GEMINI-API";

const String apiUrl = "https://generativelanguage.googleapis.com/v1beta/models/gemini-3-flash-preview:generateContent?key=" + apiKey;

int scrollY = 0;
String lastResponse = "System Ready. Type your question in the Serial Monitor...";

void updateDisplay();
void askGemini(String question);

void setup() {
  Serial.begin(115200);

  pinMode(ledPin, OUTPUT);
  pinMode(btnDown, INPUT_PULLUP);
  pinMode(btnUp, INPUT_PULLUP);
  digitalWrite(ledPin, LOW);

  Wire.begin(4, 5);
  delay(250);

  if (!display.begin(i2c_Address, true)) {
    Serial.println("SH1106 allocation failed!");
    while (true);
  }

  display.setTextWrap(true);
  display.setTextSize(1);
  display.setTextColor(SH110X_WHITE);

  display.clearDisplay();
  display.setCursor(0, 0);
  display.println("Connecting Wi-Fi...");
  display.display();

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  WiFi.setSleep(false);
  updateDisplay();
}

void loop() {
  if (digitalRead(btnDown) == LOW) {
    scrollY -= 10;
    updateDisplay();
    delay(150);
  }

  if (digitalRead(btnUp) == LOW) {
    scrollY += 10;
    if (scrollY > 0) {
      scrollY = 0;
    }
    updateDisplay();
    delay(150);
  }

  if (Serial.available() > 0) {
    String input = Serial.readStringUntil('\n');
    input.trim();

    if (input.length() > 0) {
      scrollY = 0;

      display.clearDisplay();
      display.setCursor(0, 0);
      display.println("You asked:");
      display.println(input);
      display.display();
      delay(1500);

      askGemini(input);
    }
  }
}

void updateDisplay() {
  display.clearDisplay();
  display.setCursor(0, scrollY);
  display.println(lastResponse);
  display.display();
}

void askGemini(String question) {
  if (WiFi.status() != WL_CONNECTED) {
    display.clearDisplay();
    display.setCursor(0, 0);
    display.println("Reconnecting Wi-Fi...");
    display.display();

    WiFi.disconnect();
    WiFi.reconnect();

    while (WiFi.status() != WL_CONNECTED) {
      delay(500);
    }
  }

  display.clearDisplay();
  display.setCursor(0, 0);
  display.println("Gemini is thinking...");
  display.display();

  digitalWrite(ledPin, HIGH);

  WiFiClientSecure client;
  client.setInsecure();

  HTTPClient http;
  http.begin(client, apiUrl);
  http.setTimeout(150000);
  http.addHeader("Content-Type", "application/json");

  String payload = "{\"contents\":[{\"parts\":[{\"text\":\"" + question + "\"}]}]}";

  int httpResponseCode = http.POST(payload);

  digitalWrite(ledPin, LOW);

  if (httpResponseCode == 200) {
    String response = http.getString();

    DynamicJsonDocument doc(4096);
    deserializeJson(doc, response);

    lastResponse = doc["candidates"][0]["content"]["parts"][0]["text"].as<String>();

    scrollY = 0;
    updateDisplay();

    Serial.println("\nGemini: " + lastResponse);
  } else {
    lastResponse = "API Error: " + String(httpResponseCode);
    updateDisplay();

    Serial.print("Error Details: ");
    Serial.println(http.getString());
  }

  http.end();
}
