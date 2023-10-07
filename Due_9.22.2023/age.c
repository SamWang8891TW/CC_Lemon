#include <stdio.h>

int main(){
    int year, birthday = 0;

    printf("Please input the current year: ");
    scanf("%d", &year);
    printf("Please input the year of your birthday: ");
    scanf("%d", &birthday);
    printf("You are %d years old.\n", year-birthday);
    
    return 0;
}
