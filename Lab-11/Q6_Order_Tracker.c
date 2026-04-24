#include <stdio.h>
#include <string.h>
struct Order {
    int orderID;
    char customerName[50];
    char productName[50];
    int quantity;
    float unitPrice;
    char status[20];
};
float computeTotal(struct Order o) {
    return o.quantity * o.unitPrice;
}

void filterByStatus(struct Order orders[], int n, char *status) {
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (strcmp(orders[i].status, status) == 0) {
            printf("Order iD %d: %s for %s\n",
                   orders[i].orderID, orders[i].productName, orders[i].customerName);
            found = 1;
        }
    }
    if (!found) {
        printf("No orders found\n");
    }
}

int main() {
    struct Order orders[4];
    char searchStatus[20];

    for (int i = 0; i < 4; i++) {
        printf("\nEnter details for Order %d\n", i + 1);

        printf("Order ID: ");
        scanf("%d", &orders[i].orderID);
        getchar();

        printf("Customer Name: ");
        fgets(orders[i].customerName, 50, stdin);
        orders[i].customerName[strcspn(orders[i].customerName, "\n")] = 0;

        printf("Product Name: ");
        fgets(orders[i].productName, 50, stdin);
        orders[i].productName[strcspn(orders[i].productName, "\n")] = 0;

        printf("quantity: ");
        scanf("%d", &orders[i].quantity);

        printf("unit Price: ");
        scanf("%f", &orders[i].unitPrice);
        getchar();

        printf("Status (Pending Shipped Delivered): ");
        scanf("%s", orders[i].status);
        getchar();
    }

    for (int i = 0; i < 4; i++) {
        float total = computeTotal(orders[i]);
        printf("Order %d (%s): Total Bill = %.2f\n",
               orders[i].orderID, orders[i].productName, total);
    }
    printf("\nEnter status to filter by: ");
    scanf("%s", searchStatus);
    filterByStatus(orders, 4, searchStatus);
}
