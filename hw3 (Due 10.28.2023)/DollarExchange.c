#include <stdio.h>

int main(){
    double currency, amount;

    printf("1 USD = ?TWD: ");
    scanf("%lf", &currency);
    printf("How much USD do you want to exchage? ");
    scanf("%lf", &amount);
    printf("You can get %lf TWD\n.", amount*currency*0.975);

    return 0;
}