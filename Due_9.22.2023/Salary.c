#include <stdio.h>

int main(){
    int paymentph, workhr = 0;

    printf("How much is the hourly payment? ");
    scanf("%d", &paymentph);
    printf("How many hours do you work? ");
    scanf("%d", &workhr);
    printf("Your salary is %d.\n", paymentph*workhr);

    return 0;
}
