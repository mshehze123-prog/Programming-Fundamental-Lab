#include <stdio.h>
int countUpperAndDigits(char *str) {
    if (str[0] == '\0') {
        return 0;
    }

    int count = 0;
    if ((str[0] >= 'A' && str[0] <= 'Z') || (str[0] >= '0' && str[0] <= '9')) {
        count = 1;
    }
    return count + countUpperAndDigits(str + 1);
}

int main() {
    char password[100];

    printf("Enter password: ");
    scanf("%s", password);

    int total = countUpperAndDigits(password);
    printf("Uppercase letters and digits found: %d\n", total);
}
