#include <stdio.h>
int countWays(int n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return 1;
    }
    return countWays(n - 1) + countWays(n - 2);
}
void printPaths(int n, char path[], int index) {
    if (n == 0) {
        for (int i = 0; i < index; i++) {
            printf("%c", path[i]);
            if (i < index - 1) {
                printf("+");
            }
        }
        printf("\n");
        return;
    }

    if (n >= 1) {
        path[index] = '1';
        printPaths(n - 1, path, index + 1);
    }

    if (n >= 2) {
        path[index] = '2';
        printPaths(n - 2, path, index + 1);
    }
}

int main() {
    int n;
    char pathTracker[50];

    printf("Enter N: ");
    scanf("%d", &n);

    printf("Total distinct ways: %d\n", countWays(n));

    if (n == 4) {
        printf("Unique paths for N = 4:\n");
        printPaths(4, pathTracker, 0);
    }
}
