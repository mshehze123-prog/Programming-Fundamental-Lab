#include <stdio.h>
#include <stdlib.h>
int main() {
    char name[50];
    int s1, s2, s3;
    float average;
    char status[10];
    char line[100];
    FILE *fptr;
    printf("Enter Student Name: ");
    scanf("%s", name);
    printf("Enter scores for 3 subjects: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    average = (s1 + s2 + s3) / 3.0;

    if (average >= 50) {
        sprintf(status, "PASS");
    } else {
        sprintf(status, "FAIL");
    }

    fptr = fopen("report.txt", "w+");

    if (fptr == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }
    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Scores: %d, %d, %d\n", s1, s2, s3);
    fprintf(fptr, "Average: %.2f\n", average);
    fprintf(fptr, "Status: %s\n", status);

    rewind(fptr);

    printf("\nReading report from file...\n\n");
    while (fgets(line, sizeof(line), fptr) != NULL) {
        printf("%s", line);
    }
    fclose(fptr);
}
