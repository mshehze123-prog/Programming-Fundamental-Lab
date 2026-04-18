#include <stdio.h>
#include <stdlib.h>
int main() {
    char productName[50];
    int quantity;
    FILE *fptr;

    fptr = fopen("inventory.txt", "a");

    if (fptr == NULL) {
        printf("Error: Could not open file for appending.\n");
        return 1;
    }
    printf("Enter product name: ");
    scanf("%s", productName);
    printf("Enter quantity: ");
    scanf("%d", &quantity);

    fprintf(fptr, "%s %d\n", productName, quantity);
    fclose(fptr);
    fptr = fopen("inventory.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }
   printf("\n Full inventory list \n");
    while (fscanf(fptr, "%s %d", productName, &quantity) != EOF) {
        printf("Product: %s, quantity: %d\n", productName, quantity);
    }
    fclose(fptr);
}
