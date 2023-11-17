#include <stdio.h>


int main(){
    int data[10], temp; //temp = temporary = 暫時的 

    printf("Please input 10 numbers: ");
    for(int i=0; i<10; i++)
        scanf(" %d", &data[i]);

    for(int i=0; i<10; i++){ //假設數字是由小排到大，但是結果是大排到小，要換10次（最多10次）
        for(int j=0; j<10; j++){ //兩兩相比大小，有需要再調換順序
            if(data[j] < data[j+1]){
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }
        }
    }
    printf("Sorted results:");
    for(int i=0; i<10; i++)
        printf(" %d", data[i]);   
    printf("\n");

    return 0;
}