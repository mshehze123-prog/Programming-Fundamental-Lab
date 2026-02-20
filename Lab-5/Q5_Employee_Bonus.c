#include<stdio.h>
int main() {
    float salary, bonus;
    int service;
    printf("Enter Salary: ");
    scanf("%f", &salary);
    printf("Enter Years of Service: ");
    scanf("%d", &service);
    if(service > 10) {
        bonus = 0.30 * salary;
    }
    else if(service > 5) {
        bonus = 0.20 * salary;
    }
    else {
        bonus = 0.10 * salary;
    }
    printf("Bonus Amount = %.2f", bonus);
}
