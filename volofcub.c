#include<stdio.h>
#include<conio.h>
int main()
{
    int length, width, height,volume;
    
    printf("Enter the length of the cuboid: ");
    scanf("%d", &length);

    printf("Enter the width of the cuboid: ");
    scanf("%d", &width);    

    printf("Enter the height of the cuboid: ");
    scanf("%d", &height);

    volume = length * width * height;

    printf("The volume of the cuboid is: %d\n", volume);

    return 0;
}