#include<stdio.h>
#include<conio.h>

int main()
{
    float side;

    printf("Enter the side of surface area of cube: ");
    scanf("%f", &side);

    float surface_area = 6 * side * side;

    printf("The surface area of the cube is: %f\n", surface_area);

    return 0;
}