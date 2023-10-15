#include <stdio.h>
#include <math.h>


int main(){
    double one, two, three, half;

    printf("Please input the side lengths of a triangle: ");
    scanf("%lf %lf %lf", &one, &two, &three);
    half = (one+two+three)/2;
    printf("Area=%lf\n", sqrt(half*(half-one)*(half-two)*(half-three)));

    return 0;
}