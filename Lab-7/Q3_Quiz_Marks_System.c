#include <stdio.h>
int main() {
    int pass_marks[10];
    int fail_marks[10];
    int pass_count = 0;
    int fail_count = 0;
    int pass_sum = 0;
    int fail_sum = 0;
    int marks;
    for (int i = 0; i < 10; i++) {
        printf("Enter marks for student %d (or -1 to exit): ", i + 1);
        scanf("%d", &marks);
        if (marks == -1) {
            break;
        }
        if (marks >= 5 && marks <= 10) {
            pass_marks[pass_count] = marks;
            pass_sum += marks;
            pass_count++;
        } else if (marks >= 0 && marks < 5) {
            fail_marks[fail_count] = marks;
            fail_sum += marks;
            fail_count++;
        } else {
            printf("Invalid input. Marks must be between 0 and 10.\n");
            i--; 
        }
    }
    printf("\nPass Students \n");
    printf("Marks entered: ");
    for (int i = 0; i < pass_count; i++) {
        printf("%d ", pass_marks[i]);
    }
    
    if (pass_count > 0) {
        printf("\nAverage: %.2f\n", (float)pass_sum / pass_count);
    } else {
        printf("\nAverage: 0.00\n");
    }

    printf("\nFailed Students\n");
    printf("Marks entered: ");
    for (int i = 0; i < fail_count; i++) {
        printf("%d ", fail_marks[i]);
    }
    
    if (fail_count > 0) {
        printf("\nAverage: %.2f\n", (float)fail_sum / fail_count);
    } else {
        printf("\nAverage: 0.00\n");
    }
}
