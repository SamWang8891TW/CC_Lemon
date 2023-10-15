#include <stdio.h>

int main(){
    double dist, time;

    printf("distance(m): ");
    scanf("%lf", &dist);
    printf("time(min): ");
    scanf("%lf", &time);
    printf("speed= %lf m/min\n", dist/time);


    return 0;
}