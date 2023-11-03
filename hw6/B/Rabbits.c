/*
注意！！
1.這題後面要-lm (引用math.h)
2.我不知道這題你們要怎麼解，反正我是直接拿代數下去套
*/


#include <math.h>
#include <stdio.h>

#define Fibon(x) (sqrt(5)/5)*(pow((1+sqrt(5))/2,x)-pow((1-sqrt(5))/2,x))

int main(){
    long long input;

    printf("N? ");
    scanf("%lld", &input);
    if(input == 1)
        printf("There is %.0lf pair of rabbits in the %lld", Fibon(input), input);
    else {
        printf("There are %.0lf pairs of rabbits in the %lld", Fibon(input), input);
    }

    if(input == 1)
        printf("st month.\n");
    else if(input == 2)
        printf("nd month.\n");
    else if(input == 3)
        printf("rd month.\n");
    else
        printf("th month.\n");

    return 0;
}
