#include <stdio.h>


int main(){
    char input[3];

    scanf("%s", input);

    switch (input[0]) {
        case 'T':
        case 't': // 上面符合也會執行，因為沒有break;
            printf("Tony is ");
            break;
        case 'J':
        case 'j':
            printf("Jack is ");
            break;
        case 'A':
        case 'a':
            printf("Amy is ");
            break;
        default:
            printf("Wrong person is ");
    }   

    switch (input[1]) {
        case 'R':
        case 'r': // 上面符合也會執行，因為沒有break;
            printf("reading in ");
            break;
        case 'S':
        case 's':
            printf("sleeping in ");
            break;
        case 'W':
        case 'w':
            printf("working in ");
            break;
        default:
            printf("doing a wrong thing in ");
    } 

    switch (input[2]) {
        case 'S':
        case 's': // 上面符合也會執行，因為沒有break;
            printf("the school.\n");
            break;
        case 'H':
        case 'h':
            printf("the home.\n");
            break;
        case 'G':
        case 'g':
            printf("the garden.\n");
            break;
        default:
            printf("a wrong place.\n");
    } 

    return 0;
}