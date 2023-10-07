#include <stdio.h>


int main(){
    float sqmeter = 0, ping = 0;

    printf("Please input an area in asquare meters: ");
    scanf("%f", &sqmeter);

    printf("%f square meters=%f ping.\n", sqmeter, sqmeter*0.3025);


    return 0;
}
