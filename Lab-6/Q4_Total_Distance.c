#include <stdio.h>
int main() {
    int n;
    float distance;
    float totalDistance = 0;

    printf("Enter number of days: ");
    scanf("%d", &n);
    for (int day = 1; day <= n; day++) {
        printf("Enter distance covered on day %d (in km): ", day);
        scanf("%f", &distance);
        totalDistance = totalDistance + distance;
    }
    printf("\nTotal distance covered in %d days is: %.2f km\n", n, totalDistance);
}
