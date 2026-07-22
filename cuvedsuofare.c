#include <stdio.h>
#include <conio.h>

int main()
{
    int r,h,v;

    printf("Enter the radius of the cylinder: ");
    scanf("%d",&r); 
    printf("Enter the height of the cylinder: ");
    scanf("%d",&h);

    v=3.14*r*r*h;
    printf("Volume of the cylinder is: %d",v);

    return 0;
}