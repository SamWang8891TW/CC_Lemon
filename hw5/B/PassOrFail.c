//這題若編譯有問題要提出，若編譯器使用C99(1999年)之前的標準則會編譯錯誤

#include <stdio.h>

int main() {
    int number;

    printf("Input your score: ");
    scanf("%d", &number);

    switch (number) {
        case 60 ... 100: // 60~100之間 
            printf("You pass!\n");
            break;
        case 0 ... 59:
            printf("You fail!\n");
            break;
        default:
            printf("Error!\n");
    }

    return 0;
}