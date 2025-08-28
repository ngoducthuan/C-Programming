#include <stdio.h>

int main(){
    int year;
    int age;

    printf("Enter current year: ");
    scanf("%d", &year);
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Year you were born: %d", year - age);
    return 0;
}