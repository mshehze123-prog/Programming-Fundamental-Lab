#include <stdio.h>
#include <stdlib.h>

int main() {
    int score, val;
    int sum = 0;
    int count = 0;
    float average;
    FILE *fptr;

    fptr = fopen("survey.txt", "w");

    if (fptr == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    printf("Enter 5 survey scores (1-10):\n");
    for (int i = 0; i < 5; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &score);
        fprintf(fptr, "%d\n", score);
    }

    fclose(fptr);

    fptr = fopen("survey.txt", "r");

    if (fptr == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    while (fscanf(fptr, "%d", &val) != EOF) {
        sum += val;
        count++;
    }

    if (count > 0) {
        average = (float)sum / count;
    } else {
        average = 0.0;
    }

    printf("\nTotal Sum: %d\n", sum);
    printf("Average Score: %.2f\n", average);

    fclose(fptr);

    return 0;
}
