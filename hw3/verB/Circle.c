#include <math.h>
#define pi 3.14
#include <stdio.h>


int main(){
    double rad;

    printf("radius(cm): ");
    scanf("%lf", &rad);
    printf("circular area=%lf square centimeter.\n", pi*rad*rad);

    return 0;
}