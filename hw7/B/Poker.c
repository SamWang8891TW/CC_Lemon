#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define diamond "\u2666" //我不知道中文 =2
#define club "\u2663" //黑桃 =3
#define heart "\u2665" //紅心 =1
#define spade "\u2660" //我不知道中文 =4

int main(){
    int cards[52][2] = {0}; 
    //第一層陣列用以儲存數字及jqk，第二層用以儲存花色(1=hearts，2=diamonds，3=clubs，4=spades)。1 = Ace, 11 = Jack, 12 = Queen, 13 = King
    //哈哈我撲克牌就是爛，那個hearts diamonds什麼的中文你們就自己查吧
    srand(time(NULL));

    for(int i = 0; i<=52; i++){//一副撲克牌除了鬼牌有52張卡片
RECHOOSE:
        //printf("choosing cards...\n");
        cards[i][0] = rand() % 13 + 1;
        cards[i][1] = rand() % 4 + 1;
        for(int j = i-1; j>=1; j--){ //防止重複選牌（例：兩張梅花2），要跟前面選過的比一比
            if(cards[j][0] == cards[i][0]){ //數字重複了！確認一下花色有沒有重複
                if(cards[j][1] == cards[i][1]){
                    //printf("Dupped, rechose\n");
                    goto RECHOOSE; //花色重複了，回去前面重選 
                }
            }
        }
    }

    for(int i = 0; i<52; i++){
        switch(cards[i][1]){ //印出花色
            case 1:
                printf("%s", heart); //看一下上面的define
                break;
            case 2:
                printf("%s", diamond);
                break;
            case 3:
                printf("%s", club);
                break;
            case 4:
                printf("%s", spade);
                break;
        }
        
        switch(cards[i][0]){ //印出數字（或A T J Q K）
            case 1:
                printf("A ");
                break;
            case 10:
                printf("T ");
                break;
            case 11:
                printf("J ");
                break;
            case 12:
                printf("Q ");
                break;
            case 13:
                printf("K ");
                break;
            default:
                printf("%d ", cards[i][0]);    
        }

        if((i+1)%13 == 0) //換行條件
            printf("\n");
    }

    return 0;
}
