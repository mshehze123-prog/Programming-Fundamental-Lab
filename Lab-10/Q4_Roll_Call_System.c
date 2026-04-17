#include <stdio.h>
#include <string.h>
int main() {
    char names[5][30];
    char searchName[30];
    int found = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter name for student %d: ", i + 1);
        fgets(names[i], 30, stdin);

        size_t len = strlen(names[i]);
        if (len > 0 && names[i][len - 1] == '\n') {
            names[i][len - 1] = '\0';
        }
    }

    printf("\n  Student List  \n");
    for (int i = 0; i < 5; i++) {
        fputs(names[i], stdout);
        printf("\n");
    }

    printf("\nEnter name to search: ");
    fgets(searchName, 30, stdin);
    size_t sLen = strlen(searchName);
    if (sLen > 0 && searchName[sLen - 1] == '\n') {
        searchName[sLen - 1] = '\0';
    }

    for (int i = 0; i < 5; i++) {
        if (strcmp(names[i], searchName) == 0) {
            printf("Found at position %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found\n");
    }
}
