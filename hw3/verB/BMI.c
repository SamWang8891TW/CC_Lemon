#include <stdio.h>

int main(){
    double kilo, meter;

    printf("Please input the weight (KG): ");
    scanf("%lf", &kilo);
    printf("Please input the height (Meter): ");
    scanf("%lf", &meter);
    printf("BMI= %lf\n", kilo/(meter*meter)); //你們規定不能用sqrt()！！！


    return 0;
}