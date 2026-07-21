#include<stdio.h>
#include<conio.h>

int main ()
{
    int l,b,h;

    printf("Enter the length,breadth and height of the total surface area of cuboid");
    scanf("%d%d%d",&l,&b,&h);

    int total_surface_area = 2*(l*b + b*h + h*l);

    printf("Total surface area of cuboid is %d",total_surface_area);

    return 0;

}