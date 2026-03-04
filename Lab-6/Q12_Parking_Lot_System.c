#include <stdio.h>
int main() {
    int totalSpaces = 50;
    int remaining = 50;
    int entry;
    printf("Parking Lot System (Total Spaces: 50)\n");
    while (remaining > 0) {
        printf("\nEnter 1 for car arrival (0 to stop): ");
        scanf("%d", &entry);
        if (entry == 0) {
            printf("Parking closed by operator.\n");
            break;
        }
        if (entry == 1) {
            remaining--;
            printf("Car parked successfully.\n");
            printf("Remaining Spaces: %d\n", remaining);
        }
        else {
            printf("Invalid input! Please enter 1 or 0.\n");
        }
    }
    if (remaining == 0) {
        printf("\nParking Lot is FULL! No more cars allowed.\n");
    }
    printf("System Ended.\n");
}
