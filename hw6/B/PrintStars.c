#include <stdio.h>


int main(){
    int input, c, d;

    printf("Number?");
    scanf("%d", &input);

    for(int i = 1; i <= input; i++){ //三行一組，要跑幾組
        //printf("Di=%d", i);
        for(int j = 1; j <= i+2; j++){
            //printf("Dj=%d", j);
            d=2*i;
            //printf("Dc=%d", c);
            for(int k = 1; k <= (-1+2*j); k++){ //k+=d 與 k=k+d相同
                printf("*");
            }
            printf("\n");
        }
    }

    return 0;
}