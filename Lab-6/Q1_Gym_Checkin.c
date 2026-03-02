#include <stdio.h>
int main() {
    int status;
    int totalpresent = 0;
    for (int i = 1; i <= 25; i++) {
        printf("Enter check-in status for Member %d (1 = CheckedIn, 0 = Absent): ", i);
        scanf("%d", &status);
        if (status == 1) {
            totalpresent++;
        }
    }
    printf("\nTotal Members Checked In: %d\n", totalpresent);
    printf("total absents %d",25-totalpresent);
    return 0;
}
