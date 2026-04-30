#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    float *data;
    scanf("%d", &n);
    data = (float *)calloc(n, sizeof(float));
    if (data == NULL) {
        printf("Allocation failed");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("%.1f ", data[i]);
    }
    for (i = 0; i < n; i++) {
        scanf("%f", &data[i]);
    }

    for (i = 0; i < n; i++) {
        printf("%.2f ", data[i]);
    }
    free(data);
    return 0;
}
