#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c,perimeter;
    printf("Enter the length of the three sides of the triangle:\n");
    scanf("%f%f%f",&a,&b,&c);

    perimeter=a+b+c;
    printf("The perimeter of the triangle is: %.2f",perimeter);

    return 0;
}