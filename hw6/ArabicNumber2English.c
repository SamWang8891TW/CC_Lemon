#include <stdio.h>


int main(){
    char input;
    int loop = 1;

    while(loop){
        printf("Arabic number? ");
        scanf(" %c", &input);

        switch(input){
            case 48:
                printf("zero\n");
                break;
            case 49:
                printf("one\n");
                break;
            case 50:
                printf("two\n");
                break;
            case 51:
                printf("three\n");
                break;
            case 52:
                printf("four\n");
                break;
            case 53:
                printf("five\n");
                break;
            case 54:
                printf("six\n");
                break;
            case 55:
                printf("seven\n");
                break;
            case 56:
                printf("eight\n");
                break;
            case 57:
                printf("nine\n");
                break;
            case 'q':
            case 'Q':
                printf("bye\n");
                goto PROGRAM_END;
                break;
            default:
                printf("Wrong! Try Again!\n");
                break;
        }
        //input = 0;
    }

    PROGRAM_END:
    return 0;
}