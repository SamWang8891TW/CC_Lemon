#include <stdio.h>
#include <limits.h>


int main() {
    int maxInt = INT_MAX;
    printf("short int: MAX=%d MIN=%d\n", SHRT_MAX, SHRT_MIN);
    printf("int: MAX=%d MIN=%d\n", INT_MAX, INT_MIN);
    printf("long int: MAX=%ld MIN=%ld\n", LONG_MAX, LONG_MIN);

    return 0;
}
