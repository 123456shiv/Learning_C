#include<stdio.h>
#include<conio.h>
int main
{
    float a,b,area;

    printf("Enter the value of a: ");
    scanf("%f",&a);
    printf("Enter the value of b: ");
    scanf("%f",&b);

    area = 3.14 * a * b;

    printf("The area of ellipse is: %f", area);
    return 0;
}