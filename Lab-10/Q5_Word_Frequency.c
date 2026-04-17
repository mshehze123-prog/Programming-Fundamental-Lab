#include <stdio.h>
#include <string.h>
int main() {
    char words[6][20];
    int seen[6] = {0};
    printf("Enter 6 words:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%s", words[i]);
    }
    for (int i = 0; i < 6; i++) {
        if (seen[i] == 0) {
            int count = 1;
            for (int j = i + 1; j < 6; j++) {
                if (strcmp(words[i], words[j]) == 0) {
                    count++;
                    seen[j] = 1;
                }
            }

            printf("Word: ");
            for (int k = 0; words[i][k] != '\0'; k++) {
                printf("%c ", words[i][k]);
            }
            printf(" : count: %d\n", count);
            seen[i] = 1;
        }
    }
}
