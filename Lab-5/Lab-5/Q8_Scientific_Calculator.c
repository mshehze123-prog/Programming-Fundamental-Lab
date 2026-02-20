#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float num1, num2, result;
    printf("--- Scientific Calculator ---\n");
   
    printf("Basic Operation\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
   
    printf("Scientific Operation\n");
    printf("5. Square root\n");
    printf("6. Log Base 10\n");
    printf("7. Power (x^y)\n");
    printf("8. Absolute Value\n");
    printf("9. sin\n");
    printf("10. cos\n");
    printf("11. tan\n");
    printf("0. Exit\n");
   
    do {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;

            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;

            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;

            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
       
                if (num2 == 0) {
                    printf("Error: Cannot divide by zero!\n");
                } else {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                }
                break;
             case 5:
                printf("Enter a number: ");
                scanf("%f", &num1);
                if (num1 < 0) {
                    printf("Error: Square root of a negative number is not allowed!\n");
                } else {
                    result = sqrt(num1);
                    printf("Result: %.4f\n", result);
                }
                break;
            case 6:
                printf("Enter the number: ");
                scanf("%f", &num1);
                if (num1 <= 0) {
                    printf("Error: Logarithm of zero or negative number not allowed!\n");
                } else {
                    result = log10(num1);
                    printf("Log Base 10 is: %.4f\n", result);
                }
                break;
            case 7:
                printf("Enter base and exponent: ");
                scanf("%f %f", &num1, &num2);
                result = pow(num1, num2);
                printf("Result: %.2f\n", result);
                break;
            case 8:
                printf("Enter a number: ");
                scanf("%f", &num1);
                result = fabs(num1);
                printf("Result: %.2f\n", result);
                break;
            case 9:
                printf("Enter Angle (in radians): ");
                scanf("%f", &num1);
                result = sin(num1);
                printf("Result: %.4f\n", result);
                break;
            case 10:
                printf("Enter Angle (in radians): ");
                scanf("%f", &num1);
                result = cos(num1);
                printf("Result: %.4f\n", result);
                break;
            case 11:
                printf("Enter Angle (in radians): ");
                scanf("%f", &num1);
                result = tan(num1);
                printf("Result: %.4f\n", result);
                break;
            case 0:
                printf("Exiting the program.......\n");  
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 0);

    return 0;
}
