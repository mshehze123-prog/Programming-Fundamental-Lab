#include <stdio.h>
int main() {
    float temp[7][3] = {20.5, 30.2, 25.0,22.0, 31.5, 24.5,19.8, 28.0, 23.0,21.2, 32.1, 26.4,23.5, 33.0, 27.0,20.0, 29.5, 22.5,18.5, 27.2, 21.0};
    float sum, Avg;
    float maxtemp = temp[0][0];
    int maxday = 0;

    for (int i = 0; i < 7; i++) {
       sum = 0;
        for (int j = 0; j < 3; j++) {
            sum = sum + temp[i][j];

            if (temp[i][j] > maxtemp) {
                maxtemp = temp[i][j];
                maxday = i;
            }
        }
        Avg = sum / 3.0;
        printf("Average temperature for Day %d: %.2f\n", i + 1, Avg);
    }
    printf("\nHighest temperature recorded: %.2f on Day %d\n", maxtemp, maxday + 1);
}
