#include <stdio.h>


int main(){
    char input[1000];
    long count[10] = {0}; //count 一定要訂定初始值，不然結果會很恐怖，不信你試試看把 "= {0}" 拿掉
    int i, loop = 1;
    for(i=0; i<1000; i++){
        loop = 1;
        while(loop){
            scanf("%c", &input[i]);
            if(48<=input[i] && input[i]<=57)
                loop = 0;
        }
    }
    for(i=0; i<1000; i++)
        printf("%c ", input[i]);

    for(i=0; i<1000; i++){
        switch(input[i]){
            case '0':
                count[0]++;
                break;
            case '1':
                count[1]++;
                break;
            case '2':
                count[2]++;
                break;
            case '3':
                count[3]++;
                break;
            case '4':
                count[4]++;
                break;
            case '5':
                count[5]++;
                break;
            case '6':
                count[6]++;
                break;
            case '7':
                count[7]++;
                break;
            case '8':
                count[8]++;
                break;
            case '9':
                count[9]++;
                break;

        }
    }

    printf("Number   Count\n");
    for(int i=0; i<10; i++)
        printf("%ld\n", count[i]);


    return 0;
}