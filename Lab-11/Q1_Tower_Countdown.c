#include <stdio.h>

int totalPower(int floors) {
    if (floors == 1) {
        return 100;
    }
    return 100 + totalPower(floors - 1);
}

int main() {
    int floors;
    printf("Enter the number of floors: ");
    scanf("%d", &floors);
    printf("Total power consumption: %d kWh\n", totalPower(floors));
}
