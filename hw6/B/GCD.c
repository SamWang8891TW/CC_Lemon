#include <stdio.h>


int main(){
    int num1, num2, a, b, r;

    printf("Please input two numbers: ");
    scanf("%d %d", &a, &b);

    num1 = a;
    num2 = b;

    while(b != 0){
        r = a%b;
        a = b;
        b = r;
    }

    printf("The GCD of %d and %d is %d.\n", num1, num2, a);

    return 0;
}