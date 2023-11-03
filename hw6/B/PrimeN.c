#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0; // 0 and 1 are not prime
    if (n <= 3) return 1; // 2 and 3 are prime

    // Check if n is divisible by 2 or 3
    if (n % 2 == 0 || n % 3 == 0)
        return 0;

    // Check for prime numbers using 6k +/- 1 rule
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }

    return 1;
}

int main() {
    int count;
    printf("Enter the number of prime numbers you want to list: ");
    scanf("%d", &count);

    printf("The first %d prime numbers are: ", count);
    int num = 2; // Start from 2, the first prime number
    while (count > 0) {
        if (isPrime(num)) {
            printf("%d ", num);
            count--;
        }
        num++;
    }
    printf("\n");

    return 0;
}