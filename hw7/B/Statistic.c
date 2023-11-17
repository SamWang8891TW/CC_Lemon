#include <stdio.h>


int main(){
    int data[10], max, min;
    float avg;

    printf("Please input 10 numbers: ");
    scanf("%d %d %d %d %d %d %d %d %d %d", &data[0], &data[1], &data[2], &data[3], &data[4], &data[5], &data[6], &data[7], &data[8], &data[9]);

    // for(int i=0; i<10; i++)
    //     printf("%d, ", data[i]);
    // printf("\n");

    for(int i=0; i<10; i++){
        if(data[max] < data[i])
            max = i;

        if(data[min] > data[i])
            min = i;

        avg = avg + data[i];
    }
    avg = avg/10;

    printf("The maximum number is %d.\n", data[max]);
    printf("The minimum number is %d.\n", data[min]);
    printf("The average of these ten numbers is %.2f.\n", avg);


    return 0;
}