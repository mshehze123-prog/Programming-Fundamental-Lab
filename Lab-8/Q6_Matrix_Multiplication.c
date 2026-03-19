#include<stdio.h>
int main () {
    int m ;
    printf("Ente no of rows of first matrix: ");
    scanf("%d",&m);
    int n ;
    printf("Enter no of coloumns of First matrix: ");
    scanf("%d",&n);
    int a[m][n];
    for ( int i =0; i<m; i++) {
        for ( int j =0; j<n; j++) {
            printf("Enter element of matrix A[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    int p;
    printf("Enter no of rows of second matrix: ");
    scanf("%d",&p);
    int q;
    printf("Enter no of columns of second matrix: ");
    scanf("%d",&q);
    int b[p][q];
    for ( int i =0; i<p; i++) {
        for ( int j =0; j<q; j++) {
            printf("Enter element of matrix B[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }

    }
    int c[m][q];
    printf("\n");
    if ( n!=p) {
        printf("The matrix can not be mulitplied! ");
        return 0;
    }
    else {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                c[i][j] = 0;
                for ( int k = 0; k < n; k++) {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

}
