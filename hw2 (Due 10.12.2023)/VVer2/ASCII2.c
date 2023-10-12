#include <stdio.h>


int main(){
    char input;
    int output, offset;

    printf("Please input a character and the offset: ");
    scanf("%c %d", &input, &offset);

    printf("%d(%c) + %d = %d(%c)\n", (int)input, input, offset, (int)input+offset, (char)((int)input+offset));


    return 0;
}
