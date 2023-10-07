#include <stdio.h>

int main(){
    int price, quantity = 0;

    printf("Please input the price: ");
    scanf("%d", &price);
    printf("Please input the quantity: ");
    scanf("%d", &quantity);
    printf("The total price is NT$%d.\n", price*quantity);

    return 0;
}
