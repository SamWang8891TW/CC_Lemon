//這題若編譯有問題要提出，若編譯器使用C99(1999年)之前的標準則會編譯錯誤
#include <stdio.h>

int main(){
    int input;
    double summer, non_summer;
    printf("Please input an electricty usage: ");
    scanf("%d", &input);

    switch (input) { //一口氣算兩種電費
        case 0 ... 120:
            summer = input*2.10;
            non_summer = input*2.10;
            break;
        case 121 ... 330:
            summer = (input-120)*3.02;
            summer = summer + 120*2.10;
            non_summer = (input-120)*2.68;
            non_summer = non_summer + 120*2.10;
            break;
        case 331 ... 500:
            summer = (input-330)*4.39;
            summer = summer + 120*2.10 + 210*3.02;
            non_summer = (input-330)*3.61;
            non_summer = non_summer + 120*2.10 + 210*2.68;
            break;
        case 501 ... 700:
            summer = (input-500)*4.97;
            summer = summer + 120*2.10 + 210*3.02 + 170*4.39;
            non_summer = (input-500)*4.01;
            non_summer = non_summer + 120*2.10 + 210*2.68 + 170*3.61;
        default: //這裡用於701度以上的部分
            summer = (input-700)*5.63;
            summer = summer + 120*2.10 + 210*3.02 + 170*4.39 + 200*4.97;
            non_summer = (input-700)*4.50;
            non_summer = non_summer + 120*2.10 + 210*2.68 + 170*3.61 + 200*4.01;
    }


    printf("Summer months: %.2f \n", summer);
    printf("Non-Summer months: %.2f \n", non_summer);

    return 0;
}