#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;

    fptr = fopen("config.txt", "r");

    if (fptr == NULL) {
        printf("config.txt not found. Creating a default configuration file...\n");

        fptr = fopen("config.txt", "w");

        if (fptr == NULL) {
            printf("Error: Could not create the default configuration file.\n");
            return 1;
        }

        fprintf(fptr, "max_users=50\n");
        fprintf(fptr, "timeout=30\n");
        fprintf(fptr, "server_mode=active\n");

        printf("Default config.txt created successfully. Please restart the program.\n");
        fclose(fptr);
    } else {
        printf("Success: config.txt found and loaded.\n");

        char setting[100];
        printf("\n reading current settings \n");
        while (fscanf(fptr, "%s", setting) != EOF) {
            printf("%s\n", setting);
        }

        fclose(fptr);
    }
}
