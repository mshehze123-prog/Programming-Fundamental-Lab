#include <stdio.h>
#include <string.h>
int main() {
    char email[100];
    char buffer[100];
    char display[150] = "Email: ";
    char *domain;

    printf("Enter email address: ");
    if (fgets(email, sizeof(email), stdin) == NULL) {
        return 1;
    }

    size_t len = strlen(email);
    if (len > 0 && email[len - 1] == '\n') {
        email[len - 1] = '\0';
    }

    strcpy(buffer, email);

    char *at_ptr = strchr(buffer, '@');

    if (at_ptr == NULL) {
        printf("Error! '@' symbol not found.\n");
    } else {
        domain = at_ptr + 1;

        if (strstr(domain, ".") == NULL) {
            printf("Error: Domain does not contain a . separator.\n");
        } else {
            printf("Domain: %s\n", domain);

            strcat(display, buffer);
            printf("%s\n", display);
        }
    }
}
