#include <stdio.h>


int main(){
    char input[10]; //我感覺這裡用陣列最快，中括號裡面是要建立的格子數，只有一個數代表示一維陣列

    printf("Please input the uniform-invoice number: ");
    scanf("%s", input); //這例要讀一整個字串，故事用string (%s)
    printf("The sum of the last 3 digits is %c+%c+%c=%d.\n", input[7], input[8], input[9], (int)input[7]+(int)input[8]+(int)input[9]-48*3); 
    //這裡要輸出三個字元，故使用character (%s)，然後再將字元轉換成ascii相加後再-48*3("1"=49(10進制),三個數字所以減三次)
    //且因為要輸入陣列所以不用在前面加上"&"（這點有待確認，我不是很肯定）


    return 0;
}


/*
        補充：一維陣列的應用

               -----------------------------
第X格：         |  第0格  |  第1格  |  第2格  |
該格資料        |    d   |    e    |    f   |
               -----------------------------

    ^^ 上面的陣列總共有3格，但是要指定陣列（讀資料或是存資料的時候）要從0開始數
    char array[3]; //建立一個3格的字元陣列
    printf("%c", array[2]); //我會得到"f"

*/