#include <stdio.h>
int totalRuns(int arr[], int n);
int highestScore(int arr[], int n);
int aboveAverage(int arr[], int n, float avg);

int main() {
    int scores[10];
    int n = 10;
    int total, highest, count;
    float average;

    printf("Enter scores for 10 matches:\n");
    for (int i = 0; i < n; i++) {
        printf("Match %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    total = totalRuns(scores, n);
    average = (float)total / n;
    highest = highestScore(scores, n);
    count = aboveAverage(scores, n, average);
    printf("Total Runs Scored       : %d\n", total);
    printf("Average Runs Per Match  : %.2f\n", average);
    printf("Highest Score           : %d\n", highest);
    printf("Matches Above Average   : %d\n", count);

    return 0;
}
int totalRuns(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int highestScore(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int aboveAverage(int arr[], int n, float avg) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if ((float)arr[i] > avg) {
            count++;
        }
    }
    return count;
}
