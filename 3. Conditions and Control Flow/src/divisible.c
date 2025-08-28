#include <stdio.h>

int findMin(int, int, int);

int main(){
    int min;
    int first_num, second_num, third_num;

    printf("Enter three number.\n");
    printf("Enter first number: ");
    scanf("%d", &first_num);
    printf("Enter second number: ");
    scanf("%d", &second_num);
    printf("Enter third number: ");
    scanf("%d", &third_num);

    min = findMin(first_num, second_num, third_num);

    if((first_num%min==0) && (second_num%min==0) && (third_num%min==0)){
        printf("Divisible");
    }else{
        printf("Not Divisible");
    }
}

int findMin(int a, int b, int c){
    int min = a;

    if( min > b){
        min = b;
    }

    if (min > c){
        min = c;
    }

    return min;
}