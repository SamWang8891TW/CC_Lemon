#include <stdio.h>


int main(){
    int year;
    printf("Please input a year in ROC: ");
    scanf("%d", &year);
    printf("ROC %d is AD %d.\n", year, year+1911);


    return 0;
}
