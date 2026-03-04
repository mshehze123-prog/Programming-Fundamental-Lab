#include <stdio.h>
int main() {
    float sal;
    printf("Enter base salary: ");
    scanf("%f", &sal);

    for (int year = 1; year <= 10; year++) {
        sal = sal + (sal * 0.05);
        printf("Salary after Year %d: %.2f\n", year, sal);
    }

}
