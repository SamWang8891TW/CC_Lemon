#include <stdio.h>

int main() {
    int userInput;
    printf("Please enter an integer: ________\b\b\b\b\b\b\b\b"); //原理就是先顯示底線(underscore)，然後再用/b (back)的方式將游標(cursor, 就是那個一閃一閃的超粗底線)往前面移動。
    //(續上)當使用者輸入東西的時候，輸入的內容就會把底線覆蓋掉，達到題目要求的效果
    scanf("%d", &userInput); 

    printf("Your input number is %d.\n", userInput); // Display the input

    return 0;
}
