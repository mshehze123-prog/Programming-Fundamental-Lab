#include <stdio.h>
int main() {
    int N;
    int Rev = 0;
    int ticketPrice;
    printf("Enter number of tickets sold (N): ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        ticketPrice = i * 100;
        Rev = Rev + ticketPrice;
    }
    printf("Total Revenue: $%d\n", Rev);
}
