#include <stdio.h>

int main(){
    int length, width, height = 0;
    printf("Please input the length: ");
    scanf("%d", &length);
    printf("Please input the width: ");
    scanf("%d", &width);
    printf("Please input the height: ");
    scanf("%d", &height);
    printf("The volume is %dx%dx%d = %d.\n", length, width, height, length*width*height);

    return 0;
}
