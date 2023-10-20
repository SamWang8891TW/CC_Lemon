#include <stdio.h>


int main(){
    int input_hr, input_min, input_sec;

    printf("Please input a time (HH:MM:SS): ");
    scanf("%d:%d:%d", &input_hr, &input_min, &input_sec);
    printf("%02d:%02d:%02d = %02.5lf hours\n", input_hr, input_min, input_sec, (double)input_hr+(double)input_min/60+(double)input_sec/3600);
/*
    %02d
--> 整數兩位(0"2")，整數不足補零("0"2)，以int形式呈現(02"d")

    %02.51lf 
--> 整數兩位(0"2".5lf)，整數不足補零("0"2.5lf)，小數5位(02."5"lf)，不需要不足補零因為小數幾位就幾位了，然後在以double形式呈現(02.51"lf")
                
*/

    return 0;
}