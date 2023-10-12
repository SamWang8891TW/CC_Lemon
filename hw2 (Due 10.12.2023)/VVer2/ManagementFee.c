#include <stdio.h>


int main(){
    double ping = 0;

    printf("How big is your apartment: ");
    scanf("%lf", &ping);

    printf("Your management fee is %lf.\n", (ping*50)-(ping*3.3058*120/12));

    return 0;
}
