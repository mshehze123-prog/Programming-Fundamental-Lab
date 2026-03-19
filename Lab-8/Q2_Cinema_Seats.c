#include <stdio.h>
int main() {
    int seats[5][6] = { 0, 1, 0, 1, 1, 0,1, 1, 1, 0, 0, 1,0, 0, 0, 0, 0, 0,1, 0, 1, 0, 1, 1,0, 1, 0, 0, 0, 1 };
    int available = 0;
    int max = -1;
    int maxRow = -1;

    for (int i = 0; i < 5; i++) {
        int rowBooked = 0;
        for (int j = 0; j < 6; j++) {
            if (seats[i][j] == 0) {
                available++;
            } else {
                rowBooked++;
            }
        }

        if (rowBooked > max) {
            max = rowBooked;
            rowBooked = i;
        }
    }

    printf("total available seats: %d\n", available);
    printf("row with maximum booked seats: %d haivng seats %d \n", maxRow + 1, max);
}
