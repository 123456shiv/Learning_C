#include<stdio.h>
#include<conio.h>

int main()
{
    float base,height,area;
    printf("Enter the base and height of the triangle:\n");
    scanf("%f%f",&base,&height);

    area=base*height;

    printf("The area of the triangle is: %.2f",area);
    return 0;
}