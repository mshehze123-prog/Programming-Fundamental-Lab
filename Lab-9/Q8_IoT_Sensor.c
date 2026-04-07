#include <stdio.h>
int main() {
    int vibrations;
    float temperature;
    char status;
    void *sensor;

    printf("enter vibrations per second: ");
    scanf("%d", &vibrations);

    printf("enter temperature in Celsius: ");
    scanf("%f", &temperature);

    printf("enter status code N,W,C: ");
    scanf(" %c", &status);

    printf("\n");

    sensor = &vibrations;
    printf("vbrations : %d per second\n", *(int *)sensor);
    printf("Memory Addr: %p\n\n", (void *)sensor);

    sensor = &temperature;
    printf("temperature: %.1f degrees Celsius\n", *(float *)sensor);
    printf("memory addr: %p\n\n", (void *)sensor);

    sensor = &status;
    printf("status: %c\n", *(char *)sensor);
    printf("memory Addr: %p\n\n", (void *)sensor);

    printf("\n");

    if (*(char *)sensor == 'N') {
        printf("normal everything working fine.\n");
    }
    else if (*(char *)sensor == 'W') {
        printf("warning  temp or vibration exceeds\n");
    }
    else if (*(char *)sensor == 'C') {
        printf("critical action required.\n");
    }
    else {
        printf(" No data entered\n");
    }
}
