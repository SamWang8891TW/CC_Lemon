#include <stdio.h>


int main(){
    int data[6];

    for(int i=0; i<6; i++)
        scanf(" %d", &data[i]);
    
    printf("The Matrix Inversion:");
    for(int i=5; i>=0; i--)
        printf(" %d\n", data[i]);



    return 0;
}