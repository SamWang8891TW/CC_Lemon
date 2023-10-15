//（把我刪掉）記得 -lm！！！！ 忘記為什麼看群組釘選

#include <stdio.h>
#include <math.h>


int main(){
    double leg1, leg2;

    printf("Please input the lengths of two legs of a right triangle: ");
    scanf("%lf %lf", &leg1, &leg2);
    printf("The hypotenuse of the right triangle is %lf.\n", sqrt(pow(leg1,2)+pow(leg2,2)));

    return 0;
}