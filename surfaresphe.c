#include<Stdio.h>
#include<conio.h>

int main()
{
    float r;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &r);

    float surface_area = 4 * 3.14 * r * r;

    printf("Surface area of the sphere is: %.2f", surface_area);

    return 0;
}