#include <stdio.h>
#include "Permutation.h"

int permutation(int input1, int input2){
    //input1!/(input1-input2)!
    int result = factorial_for_perc(input1) / factorial_for_perc(input1-input2);
    return result;
}
int factorial_for_perc(int n){
    if (n==0 || n==1){
       return 1;
    }
    else{
        return n * factorial_for_perc(n-1);
    }
}