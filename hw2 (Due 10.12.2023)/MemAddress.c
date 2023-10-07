#include <stdio.h>


int main() {
    int number;
    printf("x=?");
    scanf("%d", &number);

    printf("An int variable is decleaed with value %d and it is allocated at memory address %p.\n", number, (void *)&number);

    return 0;
}
