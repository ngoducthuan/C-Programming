#include <stdio.h>

int main(){
    int seconds_input;
    int hours, minutes, seconds;

    printf("Enter secounds you want to  convert: ");
    scanf("%d", &seconds_input);

    hours = seconds_input / 3600;
    seconds = seconds_input % 60;
    minutes = (seconds_input - hours * 3600) / 60;
    
    // if(hours < 10 && minutes < 10 && seconds < 10){
    //     printf("0%d:0%d:0%d", hours, minutes, seconds);
    // }else if(hours < 10 && minutes < 10){
    //     printf("0%d:0%d:%d", hours, minutes, seconds);
    // }else if(hours < 10){
    //     printf("0%d:%d:%d", hours, minutes, seconds);
    // }else{
    //     printf("%d:%d:%d", hours, minutes, seconds);
    // }
    printf("%02d : %02d : %02d", hours, minutes, seconds);
}