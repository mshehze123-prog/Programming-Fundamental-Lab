#include <stdio.h>
int main() {
    int marks[4][3] = {78,79,88,98,90,78,67,99,96,67,45,87};
    int studentTotal;
    float Sum, Average;

    for (int i = 0; i < 4; i++) {
        studentTotal = 0;
        for (int j = 0; j < 3; j++) {
            studentTotal = studentTotal + marks[i][j];
        }
        printf("total marks of student %d: %d\n", i + 1, studentTotal);
    }
    printf("\n");
    for (int j = 0; j < 3; j++) {
        Sum = 0;
        for ( int i = 0; i < 4; i++) {
            Sum = Sum + marks[i][j];
        }
        Average = Sum / 4.0;
        printf("average marks of subject %d: %.2f\n", j + 1, Average);
    }
}
