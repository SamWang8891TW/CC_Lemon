#include <stdio.h>

int main(){
    double input;

    printf("Celsius: ");
    scanf("%lf", &input);

    printf("Celsius %lf = Fahrenheit %lf\n", input, input*(9.0/5)+32); //只要用到float double(浮點相關的被除數要有小數（.0也行），不然會出錯)



    return 0;
}