#include <stdio.h>
int main() {
    int pin;
    int Pin = 5555;
    printf("Enter PIN: ");
    scanf("%d", &pin);

    while (pin != Pin) {
        printf("Try again: ");
        scanf("%d", &pin);
    }
    printf("Access Granted.\n");
}
