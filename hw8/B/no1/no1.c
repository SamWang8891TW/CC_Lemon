#include <stdio.h>
#include "tools.h"

int main(){
    char result;

    for(;;){ //無限迴圈，把for回圈裡面的變數都拿掉就變成了無限迴圈
        result = getCommand();
        if(result == 'q'){
            printf("Bye!");
            newline();
            break;
        }
        else{
            showCommand(result);
            newline();
        }
    
    }
    return 0;
}