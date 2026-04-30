#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    float *grades;

    printf("Enter number of students: ");
    scanf("%d", &n);

    grades = (float *)malloc(n * sizeof(float));

    if (grades == NULL) {
        printf("Allocation failed");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter grade %d: ", i + 1);
        scanf("%f", &grades[i]);
    }

    for (i = 0; i < n; i++) {
        printf("%.2f ", grades[i]);
    }
    free(grades);
    return 0;
}
