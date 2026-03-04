 #include <stdio.h>
int main() {
    float price;
    float totalBill = 0;
    float discount = 0;
    float finalAmount;
    int choice;

    do {
        printf("Enter price of item: ");
        scanf("%f", &price);
        totalBill = totalBill + price;
        printf("Add another item? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);
    } while (choice == 1);
    if (totalBill > 3000) {
        discount = totalBill * 0.10;
    }

    finalAmount = totalBill - discount;
    printf("\nTotal Bill: %.2f\n", totalBill);
    printf("Discount: %.2f\n", discount);
    printf("Final Payable Amount: %.2f\n", finalAmount);

}
