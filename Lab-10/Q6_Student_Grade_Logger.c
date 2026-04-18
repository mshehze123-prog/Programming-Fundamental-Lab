#include <stdio.h>
#include <stdlib.h>
int main() {
    char name[50];
    int grade;
    FILE *fptr;

    fptr = fopen("grades.txt", "w");

    if (fptr == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        printf("Enter name %d: ", i + 1);
        scanf(" %s", name); // Added a space before %s
        printf("Enter grade %d: ", i + 1);
        scanf(" %d", &grade); // Added a space before %d
        fprintf(fptr, "%s %d\n", name, grade);
    }
    fclose(fptr);
    fptr = fopen("grades.txt", "r");

    if (fptr == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    while (fscanf(fptr, "%s %d", name, &grade) != EOF) {
        printf("Student: %s, Grade: %d\n", name, grade);
    }

    fclose(fptr);
}
