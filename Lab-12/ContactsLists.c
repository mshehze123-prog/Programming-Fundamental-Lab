#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr, *temp, i;

    arr = (int *)malloc(3 * sizeof(int));

    if (arr == NULL) {
        printf("Allocation failed");
        return 1;
    }

    for (i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }

    temp = (int *)realloc(arr, 5 * sizeof(int));

    if (temp == NULL) {
        printf("Reallocation failed");
        free(arr);
        return 1;
    }
    arr = temp;
    for (i = 3; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
}
