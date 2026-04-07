#include <stdio.h>
int main() {
    int attendance[4][5] = {
        {1, 1, 0, 1, 1},
        {1, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 0, 0, 0, 1}
    };

    int (*p)[5] = attendance;


    printf("student   pattern        total    status\n");

    for (int i = 0; i < 4; i++) {
        int weeklytotal = 0;
        printf("student %d: ", i + 1);

        for (int j = 0; j < 5; j++) {
            int status = (*(p + i))[j];
            printf("%d ", status);
            weeklytotal += status;
        }

        printf("    %d      ", weeklytotal);

        if (weeklytotal < 3) {
            printf("  At risk");
        }
        printf("\n");
    }
}
