#include <stdio.h>
int main() {
    int arr[6];
    int *p = arr;
    int highest = 0;

    printf("enter marks for 6 students:\n");
    for (int i = 0; i < 6; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", (p + i));
    }
    printf("\n");
    printf("entered marks: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    highest = *p;
    for (int i = 1; i < 6; i++) {
        if (*(p + i) > highest) {
            highest = *(p + i);
        }
    }

    if (highest > 0) {
        for (int i = 0; i < 6; i++) {
            *(p + i) = (int)(((float)*(p + i) / highest) * 100);
        }
    }
    printf("scaled marks  : ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}
