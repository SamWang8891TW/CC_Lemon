#include <stdio.h>

int main() {
    int number, reversedNumber;

    printf("Please input a two-digit number(10-99): ");
    scanf("%d", &number);

    // Reverse the two-digit number
    int tensDigit = number / 10;    // 將數字除以10，因為他是int所以沒有小數點，這是後就只剩下十位數。
    //我們將十位數存入tensDigit
    int onesDigit = number % 10;    // 將一個二位數%10就是取個位數，將各位數存入onesDigit(為什麼可以這麼做後面應該會教)

    reversedNumber = (onesDigit * 10) + tensDigit; // 將數字反轉

    printf("The reversed number is %d!\n", reversedNumber);

    return 0;
}
