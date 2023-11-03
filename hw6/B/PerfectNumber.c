#include <stdio.h>

int main(){
    long long input, check; //我只是怕老師輸入太多位數
    int factors[100], counter = 0;
    //factors 用以儲存所有因數（因為你們檔案要求輸出倒數第二個要加上and，我不知道還有什麼其他辦法）
    //counter 指向下一個要儲存的factor陣列格子

    printf("Please input a number: ");
    scanf("%lld", &input);
    
    for (int i = 1; i <= input; i++) {
        if (input % i == 0) {
            factors[counter] = i;
            counter++;
        }
    }

/*  !!debug purpose!! 除錯用，用以顯示因數

    printf("[DEBUG]Factors= ");
    for (int i = 0; i < counter; i++){
        printf("%d ", factors[i]);
    }
    printf("\n");

*/

    check = input;
    for(int i = 0; i < counter-1; i++) //counter-1的原因是因為本身不能算進去
        check = check - factors[i];

    if(check) //同等於 if(check == 1)，也同等於check 為非0數
        printf("%lld is not a perfect number.\n", input);
    else
        printf("%lld is a perfect number.\n", input);


    return 0;
}