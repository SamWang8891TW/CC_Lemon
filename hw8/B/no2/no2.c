#include <stdio.h>
#include "Permutation.h"


int main(){
    int input1, input2;

    printf("Please input n: ");
    scanf("%d", &input1);
    printf("Please input m: ");
    scanf("%d", &input2);

    printf("P(%d,%d) = %d\n", input1, input2, permutation(input1,input2));


    return 0;
}