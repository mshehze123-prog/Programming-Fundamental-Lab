#include <stdio.h>
int main() {
    int units;
    int count = 0;
    float totalUnits = 0;
    float average;
    printf("Enter daily power consumption (Enter -999 to stop): ");
    scanf("%d", &units);
    while (units != -999) {
        totalUnits = totalUnits + units;
        count++;
        printf("Enter daily power consumption (Enter -999 to stop): ");
        scanf("%d", &units);
    }
    if (count > 0) {
        average = totalUnits / count;
        printf("\nTotal Days Recorded: %d\n", count);
        printf("Average Consumption: %.2f units\n", average);
    } else {
        printf("\nNo data entered.\n");
    }
}
