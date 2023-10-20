#include <stdio.h>


int main(){
    int ID, fare;
    char ticket_type;

    printf("Please input a camput ID (1-3): ");
    scanf("%d", &ID);
    printf("(S)ingle or (R)eturn ticket? ");
    scanf(" %c", &ticket_type);

    switch (ID) {
        case 1:
            fare = 30;
            break;
        case 2:
            fare = 26;
            break;
        case 3:
            fare = 20;
            break;
    }

    switch (ticket_type) {
        case 'S':
        case 's': // 上面符合也會執行，因為沒有break;
            printf("Fare=$%d\n", fare/2+3);
            break;
        case 'R':
        case 'r':
            printf("Fare=$%d\n", fare+3);
            break;
    }


    return 0;
}