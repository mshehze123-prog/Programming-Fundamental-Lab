#include <stdio.h>
int main() {
    int arr[7] = {15, 2, 7, 20, 5, 6, 12};
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < 7; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    int diff = max - min;
    printf("Difference: %d\n", diff);
}
