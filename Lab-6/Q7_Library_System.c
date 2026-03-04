#include <stdio.h>
int main() {
    int choice;
    do {
        printf("1. Issue Book\n");
        printf("2. Return Book\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            printf("Book Issued Succesfully!\n");
        }
        else if (choice == 2) {
            printf("Book Returned succesfully!\n");
        }
        else if (choice == 3) {
            printf("Exiting Program...\n");
        }
        else {
            printf("invalid Choice\n");
        }
    } while (choice != 3);
}
