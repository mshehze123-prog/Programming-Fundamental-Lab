#include <stdio.h>
float triageScore(int severity, int age, int vitals);

int main() {
    int severity, age, vitals;
    float score;
    printf("Enter severity of injury (1-10): ");
    scanf("%d", &severity);

    printf("Enter age risk factor (1-10): ");
    scanf("%d", &age);

    printf("Enter vitals stability (1-10): ");
    scanf("%d", &vitals);

    score = triageScore(severity, age, vitals);

    printf("\nTriage Score: %.2f\n", score);
    if (score > 7.0) {
        printf("Imediate attention required\n");
    } else if (score >= 4.0 && score <= 7.0) {
        printf("moderate priority\n");
    } else {
        printf("can wait\n");
    }
}
float triageScore(int severity, int age, int vitals) {
    return (severity * 0.5) + (age * 0.3) + (vitals * 0.2);
}
