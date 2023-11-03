#include <stdio.h>

int main(){
    long long input, result; //我只是怕老師輸入太多位數
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

    if(counter == 1){ //counter指向1，代表只有儲存過因數一次，代表因數只有"1"
        printf("The factors of %lld is: 1.\n", input);
        goto PROGRAM_END; 
        //這裡我超前進度一下，goto指令可以讓程式直接跳到那個標籤，去看下面有一行是"PROGRAM_END"
        //我這個指令可以讓程式直接跳到下面去
    }
    else
        printf("The factors of %lld are: ", input);

    for (int i = 0; i < counter-1; i++){
        printf("%d ", factors[i]);
    }
    printf("and %d.\n", factors[counter-1]);

    PROGRAM_END: //如果只有一個因數就會跳到這裡，去看上面！！！

    return 0;
}