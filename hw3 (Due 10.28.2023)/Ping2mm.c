#include <stdio.h>

int main(){
    double input;

    printf("How many ping? ");
    scanf("%lf", &input);
    printf("%lf ping = %lf mm\n", input, input*3.3058);


    return 0;
}