#include <stdio.h>
int main() {
    int arr[10];
    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++) {
        if (arr[i] == -1) {
            continue;
        }

        for (int j = i + 1; j < 10; j++) {
            if (arr[i] == arr[j]) {
                arr[j] = -1;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
}
