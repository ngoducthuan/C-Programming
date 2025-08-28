#include <stdio.h>

int main(){
    int day, month, year;
    int leapYear = 0;

    printf("Enter your day, month, year that you want to find next day.\n");
    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    if((year%4==0 && year%100!=0) || (year%400==0)){
        leapYear = 1;
    }

    day+=1;

    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(day <= 31){
                break;
            } 
        case 4:
        case 6:
        case 9:
        case 11:
            if(day <= 30){
                break;
            } 
        case 2:
            if(day <= 29 && leapYear == 1){
                break;
            } 
            
            if(day <= 28 && leapYear == 0){
                break;
            } 
        default:
            month += 1;
            day = 1;
            if (month == 12){
                year += 1;
            }
    }
    printf("Next day is: %02d/%02d/%d", day, month, year);
}