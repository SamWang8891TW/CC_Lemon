#include <stdio.h>

int main(){
    int data[10], max, min;
    float avg;

    printf("please input 10 numbers: ");

    for(int i = 0; i<10; i++)
        scanf(" %d", &data[i]);
    
    for(int i = 0; i<10; i++){
        if(data[i] > data[max])
            max = i;
        
        if(data[i] < data [min])
            min = i;

        avg+=data[i]; // avg = avg + data[i]
    }
    
    avg/=10; //avg = avg / 10;

    printf("The maximum number: %d.\n", data[max]);
    printf("The minimum number: %d.\n", data[min]);
    printf("The average of these ten numbers is %.2f.\n", avg);


    return 0;
}