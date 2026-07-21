#include<stdio.h>
#include<conio.h>

int main()
{
    float r;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &r);

    float volume = (4.0/3.0) * 3.14 * r * r * r;

    printf("Volume of the sphere is: %.2f", volume);

    return 0;
}