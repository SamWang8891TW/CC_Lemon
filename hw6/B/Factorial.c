#include <stdio.h>

int main() {
    int number;
START:
    printf("N? ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Wrong Input! Try Again!\n");
        goto START;
    } 
    else {
        long long factorial = 1;
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }

        printf("%d! = %lld\n", number, factorial);
    }

    return 0;
}
