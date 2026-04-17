#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    int isValid = 1;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    if (len < 3 || len > 20) {
        isValid = 0;
    } else if (name[0] == ' ' || name[len - 1] == ' ') {
        isValid = 0;
    } else {
        for (size_t i = 0; i < len; i++) {
            if (isdigit((unsigned char)name[i])) {
                isValid = 0;
                break;
            }
        }
    }
    if (isValid) {
        printf("Valid Name\n");
    } else {
        printf("Invalid Name\n");
    }
    printf("Length: %zu\n", len);
}
