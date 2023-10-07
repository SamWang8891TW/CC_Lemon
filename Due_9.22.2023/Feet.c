#include <stdio.h>

int main(){
    int chickens, rabbits = 0;

    printf("How many chickens in the cage? ");
    scanf("%d", &chickens);
    printf("How many rabbits in the cage? ");
    scanf("%d", &rabbits);
    printf("There are %d feet in the cage.\n", chickens*2+rabbits*4);

    return 0;
}
