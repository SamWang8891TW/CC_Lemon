#include <stdio.h>


int main(){
    int date, month, year;

    printf("Date (UK): ");
    scanf("%d/%d/%d", &date, &month, &year);
    printf("=Date (US): %d/%d/%d\n", month, date, year);


    return 0;
}