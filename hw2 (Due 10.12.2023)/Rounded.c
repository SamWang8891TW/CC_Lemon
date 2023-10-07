#include <stdio.h>
#include <math.h>


int main(){
    float input;

    printf("Floating point number: ");
    scanf("%f", &input);
    printf("The rounded value is %d.\n", (int)round(input));

    return 0;
}

