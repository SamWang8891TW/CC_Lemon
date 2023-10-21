#include <stdio.h>


int main(){
    int input;

    printf("Please input a month: ");
    scanf("%d", &input);

    switch(input){
        case 3 ... 5:
            printf("It's Spring\n");
            break;
        case 6 ... 8:
            printf("It's Summer\n");
            break;
        case 9 ... 11:
            printf("It's Autumn\n");
            break;
        case 12: //因為沒有break; 所以會繼續執行下面的東西
        case 1 ... 2:
            printf("It's Winter\n");
            break;
    }



    return 0;
}