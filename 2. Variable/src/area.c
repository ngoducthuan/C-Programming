#include <stdio.h>

int main()
{
    float length, width;

    printf("Enter the length of rectangl: ");
    scanf("%f", &length);
    printf("Enter the width of rectangle: ");
    scanf("%f", &width);

    printf("Are: %lf", length * width);

    return 0;
}