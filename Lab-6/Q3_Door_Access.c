#include <stdio.h>
int main() {
    int code;
    int correctCode = 2468;
    do {
        printf("Enter access code: ");
        scanf("%d", &code);
        if (code != correctCode) {
            printf("Incorrect code! Try again.\n");
        }
    } while (code != correctCode);
    printf("Door Unlocked.\n");
}
