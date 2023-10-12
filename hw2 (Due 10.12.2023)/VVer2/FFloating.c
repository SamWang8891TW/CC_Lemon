#include <stdio.h>



int main() {
    float number;

    printf("Please input a floating number: ");
    scanf("%f", &number);

    // 使用 %e 來以科學記號輸出浮點數，e 表示小寫的指數 "e"
    printf("%f can be represented by %e.\n", number, number);

    // 或者您也可以使用 %E 以科學記號輸出，E 表示大寫的指數 "E"
    // printf("以科學記號輸出： %E\n", number);

    return 0;
}
