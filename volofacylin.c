#include<stdio.h>
#include<conio.h>

int main()

{
    float r,h;

    printf("Enter the radius of the cylinder: ");   
    scanf("%f", &r);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &h);

    float volume = 3.14 * r * r * h;

    printf("Volume of the cylinder is: %.2f", volume);

    return 0;
}