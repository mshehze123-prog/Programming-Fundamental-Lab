#include<stdio.h>
int main() {
    int choice, subChoice, quantity;
    int price, total;
    printf("Select Category:\n");
    printf("1. Fast Food\n");
    printf("2. Desi Food\n");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("1. Burger (Rs. 500)\n");
            printf("2. Pizza (Rs. 1200)\n");
            scanf("%d", &subChoice);

            switch(subChoice) {
                case 1:
                    price = 500;
                    printf("You selected Burger\n");
                    break;
                case 2:
                    price = 1200;
                    printf("You selected Pizza\n");
                    break;
                default:
                    printf("Invalid choice");
                    return 0;
            }
            break;
        case 2:
            printf("1. Biryani (Rs. 350)\n");
            printf("2. Karahi (Rs. 1500)\n");
            scanf("%d", &subChoice);
            switch(subChoice) {
                case 1:
                    price = 350;
                    printf("You selected Biryani\n");
                    break;
                case 2:
                    price = 1500;
                    printf("You selected Karahi\n");
                    break;
                default:
                    printf("Invalid choice");
                    return 0;
            }
            break;
        default:
            printf("Invalid category");
            return 0;
    }
    printf("Enter quantity: ");
    scanf("%d", &quantity);
    total = price * quantity;
    printf("Total Bill = Rs. %d", total);
}
