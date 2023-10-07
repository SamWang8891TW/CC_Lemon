#include <stdio.h>


int main() {
    int input;

    printf("Please input a integer: ");
    scanf("%d", &input);
    printf("Decimal(%d)=Hexadecimal(%x).\n\n", input, input);

    printf("Please input an integer in oxtal: ");
    scanf("%o", &input);
    printf("Octal(%o)=Hexadeciaml(%x).\n", input, input);

    
    return 0;
}
