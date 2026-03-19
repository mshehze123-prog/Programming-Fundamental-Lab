#include <stdio.h>
int main() {
    int r, c, i, j;
    float a[5][5];
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%f", &a[i][j]);
        }
    }

    if (r == c) {
        printf("- Square Matrix\n");
    } else {
        printf("- Rectangular Matrix\n");
    }

    if (r == 1) printf("- Row Matrix\n");
    if (c == 1) printf("- Column Matrix\n");

    int zeroCount = 1;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (a[i][j] != 0) {
                zeroCount = 0;
            }
        }
    }
    if (zeroCount == 1) printf("- Zero / Null Matrix\n");

    if (r == c) {
        int diag = 1, ident = 1, scal = 1;
        float first = a[0][0];

        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                if (i != j && a[i][j] != 0) diag = 0;
                if (i == j && a[i][j] != 1) ident = 0;
                if (i == j && a[i][j] != first) scal = 0;
            }
        }

        if (diag == 1) printf("- Diagonal Matrix\n");
        if (diag == 1 && ident == 1) printf("- Identity Matrix\n");
        if (diag == 1 && scal == 1 && zeroCount == 0) printf("- Scalar Matrix\n");

        int upper = 1, lower = 1;
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                if (i > j && a[i][j] != 0) upper = 0;
                if (i < j && a[i][j] != 0) lower = 0;
            }
        }
        if (upper == 1) printf("- Upper Triangular\n");
        if (lower == 1) printf("- Lower Triangular\n");

        int sym = 1, skew = 1;
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                if (a[i][j] != a[j][i]) sym = 0;
                if (a[i][j] != -a[j][i]) skew = 0;
            }
        }
        if (sym == 1) printf("- Symmetric Matrix\n");
        if (skew == 1) printf("- Skew-Symmetric Matrix\n");

        float d = 0;
        if (r == 2) {
            d = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
        } else if (r == 3) {
            d = a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1])
              - a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0])
              + a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]);
        }

        if (r <= 3) {
            if (d == 0) printf("- Singular Matrix\n");
            else printf("- Non-Singular Matrix\n");
        }
    }

    int r2, c2;
    float b[5][5];
    printf("\nEnter dimensions for second matrix to compare: ");
    scanf("%d %d", &r2, &c2);

    if (r == r2 && c == c2) {
        printf("Enter elements:\n");
        int eq = 1;
        for (i = 0; i < r; i++) {
            for (j = 0; j < c; j++) {
                scanf("%f", &b[i][j]);
                if (a[i][j] != b[i][j]) eq = 0;
            }
        }
        if (eq == 1) printf("- Matrices are Equal\n");
        else printf("- Matrices are Not Equal\n");
    } else {
        printf("- Not Equal (Size mismatch)\n");
    }
}
