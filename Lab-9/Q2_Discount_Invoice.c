#include <stdio.h>
float applyDiscount(float price, int tier);
void printInvoice(float original, float discounted);

int main() {
    float price;
    int tier;

    printf("Enter original price: Rs. ");
    scanf("%f", &price);

    printf("Enter membership tier (1=Bronze, 2=Silver, 3=Gold, 4=Platinum): ");
    scanf("%d", &tier);

    printInvoice(price, applyDiscount(price, tier));
}

float applyDiscount(float price, int tier) {
    if (tier == 1) {
        return price * 0.95;
    } else if (tier == 2) {
        return price * 0.90;
    } else if (tier == 3) {
        return price * 0.80;
    } else if (tier == 4) {
        return price * 0.70;
    } else {
        return price;
    }
}

void printInvoice(float original, float discounted) {
    float discountAmount = original - discounted;
    float deliveryCharge = 0.0;
    float finalTotal;

    if (discounted < 2000.0) {
        deliveryCharge = 150.0;
    }

    finalTotal = discounted + deliveryCharge;

    printf("\n");
    printf("Original Price  : Rs. %.2f\n", original);
    printf("Discount Amount : Rs. %.2f\n", discountAmount);

    if (deliveryCharge > 0.0) {
        printf("Delivery Charge : Rs. %.2f\n", deliveryCharge);
    }

    printf("         invoice\n");
    printf("Final Total     : Rs. %.2f\n", finalTotal);
}
