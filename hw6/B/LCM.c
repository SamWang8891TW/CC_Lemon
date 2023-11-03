#include <stdio.h>


int main(){
    int num1, num2, a, b, m, M, N, r;

    printf("Please input two numbers: ");
    scanf("%d %d", &a, &b);

    num1 = a;
    num2 = b;
    M = a;
    N = b;

    while(b != 0){
        r = a%b;
        a = b;
        b = r;
    }
    m=(M*N)/a;
    printf("The LCM of %d and %d is %d.\n", num1, num2, m);

    return 0;
}