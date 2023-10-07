#include <stdio.h>
#include <stdlib.h>

//原理去看Dice.c

int main(){
    printf("Throwing two dice...\n");
    srand(time(NULL));
    int dice1=(rand()%6)+1, dice2=(rand()%6)+1;
    printf("One dice shows %d and another dice shows %d.\n", dice1, dice2);
    printf("The score is %d + %d = %d.\n", dice1, dice2, dice1+dice2);

    return 0;
}
