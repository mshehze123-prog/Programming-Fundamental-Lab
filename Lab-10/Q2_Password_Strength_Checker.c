#include <stdio.h>
#include <string.h>

int main() {
    char master[] = "Password123";
    char input[100];
    int attempts = 0;
    int max_attempts = 3;
    int locked_out = 1;

    while (attempts < max_attempts) {
        printf("Enter password: ");
        if (fgets(input, sizeof(input), stdin) == NULL) {
            break;
        }

        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') {
            input[len - 1] = '\0';
            len--;
        }

        if (len == 0) {
            printf("Password cannot be empty.\n");
            attempts++;
            continue;
        }

        int cmp = strcmp(input, master);
        
        if (cmp == 0) {
            printf("Login successful!\n");
            locked_out = 0;
            break;
        } else {
            attempts++;
            
            if (cmp < 0) {
                printf("Incorrect. Input is alphabetically before the stored password.\n");
            } else {
                printf("Incorrect. Input is alphabetically after the stored password.\n");
            }

            if (attempts == 2) {
                if (strncmp(input, master, 3) == 0) {
                    printf("Hint: The first 3 characters are correct.\n");
                } else {
                    printf("Hint: The first 3 characters are incorrect.\n");
                }
            }
        }
    }

    if (locked_out) {
        printf("Account locked after 3 failed attempts.\n");
    }
}#include <stdio.h>
#include <string.h>

int main() {
    char master[] = "Password123";
    char input[100];
    int attempts = 0;
    int max_attempts = 3;
    int locked_out = 1;

    while (attempts < max_attempts) {
        printf("Enter password: ");
        if (fgets(input, sizeof(input), stdin) == NULL) {
            break;
        }

        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') {
            input[len - 1] = '\0';
            len--;
        }

        if (len == 0) {
            printf("Password cannot be empty.\n");
            attempts++;
            continue;
        }

        int cmp = strcmp(input, master);
        
        if (cmp == 0) {
            printf("Login successful!\n");
            locked_out = 0;
            break;
        } else {
            attempts++;
            
            if (cmp < 0) {
                printf("Incorrect. Input is alphabetically before the stored password.\n");
            } else {
                printf("Incorrect. Input is alphabetically after the stored password.\n");
            }

            if (attempts == 2) {
                if (strncmp(input, master, 3) == 0) {
                    printf("Hint: The first 3 characters are correct.\n");
                } else {
                    printf("Hint: The first 3 characters are incorrect.\n");
                }
            }
        }
    }

    if (locked_out) {
        printf("Account locked after 3 failed attempts.\n");
    }
}
