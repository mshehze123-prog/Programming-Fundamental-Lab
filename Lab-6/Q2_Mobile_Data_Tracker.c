#include <stdio.h>
int main() {
    float balance;
    float usage;
    printf("Enter available data balance : ");
    scanf("%f", &balance);
    while (balance > 0) {
        printf("Enter data used untill now: ");
        scanf("%f", &usage);
        balance = balance - usage;
        if (balance > 0) {
            printf("Remaining data: %.2f MB\n", balance);
        }
    }
    printf("\nData balance used!\n");
    printf("Final Balance: %.2f MB\n", balance);
}
