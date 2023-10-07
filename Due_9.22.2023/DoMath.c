#include <stdio.h>


int main(){
    int x, y=0;

    printf("Please input x: ");
    scanf("%d", &x);
    printf("Please input y: ");
    scanf("%d", &y);
    printf("(4x + 2y) = %d\n", (4 * x) + (2 * y));
    return 0;
}
