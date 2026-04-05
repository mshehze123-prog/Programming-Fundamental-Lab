#include <stdio.h>
int validatepin(int storedPIN, int enteredPIN);
int main() {
    int storedPIN = 4729;
    int enteredPIN;

    int success = 0;
    for (int i = 1; i <= 3; i++) {
        printf("enter 4 digits pin: ");
        scanf("%d", &enteredPIN);

        if (validatepin(storedPIN, enteredPIN)) {
            printf("Pin is correct! \n");
            success = 1;
            break;
        } else {
            if (i < 3) {
                printf("Incorrect PIN. Attempts remaining: %d\n", 3 - i);
            }
        }
    }
    if (!success) {
        printf("Card blocked. Contact your bank.\n");
    }
    return 0;
}
int validatepin(int storedPIN, int enteredPIN) {
    if (storedPIN == enteredPIN) {
        return 1;
    } else {
        return 0;
    }
}
