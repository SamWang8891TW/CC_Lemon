#include <stdio.h>

int main(){
    long long input, result; //我只是怕老師輸入太多位數

    printf("N? ");
    scanf("%lld", &input);

    //同時被7與11整除的數就是77的倍數，所以我們只要求使用者輸入的數有幾個77的倍數即可
    result = input/77;

    if(result > 1)
        printf("%lld numbers can be divisibled by 7 and 11.\n", result);
    else if(result) // 上面已經排除了>1的狀況了，這裏就直接判斷是否為非0數字就好了，有沒有打“==1“已經沒有差了
        printf("%lld number can be divisibled by 7 and 11.\n", result);
    else // 若不符合上述條件（即為0）
        printf("No number can be divisibled by 7 and 11.\n");



    return 0;
}