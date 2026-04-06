#include <stdio.h>
float toMegajoules(float kwh);
float toBTU(float kwh);
float toCalories(float kwh);

int main() {
    float kwh;
    printf("Enter energy reading in kWh: ");
    scanf("%f", &kwh);

    printf("input Energy   : %.2f kWh\n", kwh);
    printf("engineering     : %.2f\n", toMegajoules(kwh));
    printf("international  : %.2f\n", toBTU(kwh));
    printf("environmental : %.2f\n", toCalories(kwh));

}
float toMegajoules(float kwh) {
    return kwh * 3.6;
}

float toBTU(float kwh) {
    return kwh * 3412.14;
}

float toCalories(float kwh) {
    return kwh * 859845.0;
}
