#include <stdio.h>
int main() {
    float matrix[3][3], transpose[3][3], cofactor[3][3], adjoint[3][3], inverse[3][3];
    float det = 0;
    int i, j, k, l;

    printf("enter elements :\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%f", &matrix[i][j]);
        }
    }
    printf("\noriginal\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.2f\t", matrix[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("\ntranspose matrix\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%.2f\t", transpose[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++) {
        det = det + (matrix[0][i] * (matrix[1][(i + 1) % 3] * matrix[2][(i + 2) % 3] - matrix[1][(i + 2) % 3] * matrix[2][(i + 1) % 3]));
    }
    printf("\ndeterminant: %.2f\n", det);
    if (det == 0) {
        printf("\ninverse cannot be calculated because determinant is 0.\n");
    } else {
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                cofactor[i][j] = (matrix[(i + 1) % 3][(j + 1) % 3] * matrix[(i + 2) % 3][(j + 2) % 3]) - (matrix[(i + 1) % 3][(j + 2) % 3] * matrix[(i + 2) % 3][(j + 1) % 3]);
            }
        }
        printf("\ncofactor\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%.2f\t", cofactor[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                adjoint[j][i] = cofactor[i][j];
            }
        }
        printf("\nadjoint\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%.2f\t", adjoint[i][j]);
            }
            printf("\n");
        }

        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                inverse[i][j] = adjoint[i][j] / det;
            }
        }
        printf("\ninverse\n");
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                printf("%.2f\t", inverse[i][j]);
            }
            printf("\n");
        }
    }
}
