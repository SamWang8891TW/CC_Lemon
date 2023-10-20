//這題的另解是利用陣列，但為了配合課堂所教所以改用switch
#include <stdio.h>


//這題的另解是利用陣列，但為了配合課堂所教所以改用switch
#include <stdio.h>


int main() {
    int month, date;

    printf("Month (1-12)? ");
    scanf("%d", &month);
    printf("Date (1-31)? ");
    scanf("%d", &date);

    switch (date) {
        case 1:
            printf("Your input date is the %dst day of ", date);
            break;
        case 2:
            printf("Your input date is the %dnd day of ", date);
            break;
        case 3:
            printf("Your input date is the %drd day of ", date);
            break;
        default:
            printf("Your input date is the %dth day of ", date);
    }
    switch (month) {
        case 1:
            printf("January.\n");
            break;
        case 2:
            printf("February.\n");
            break;
        case 3:
            printf("March.\n");
            break;
        case 4:
            printf("April.\n");
            break;
        case 5:
            printf("May.\n");
            break;
        case 6:
            printf("June.\n");
            break;
        case 7:
            printf("July.\n");
            break;
        case 8:
            printf("August.\n");
            break;
        case 9:
            printf("September.\n");
            break;
        case 10:
            printf("October.\n");
            break;
        case 11:
            printf("November.\n");
            break;
        case 12:
            printf("December.\n");
            break;
    }

    return 0;
}