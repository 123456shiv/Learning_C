#include<stdio.h>
#include<conio.h>
int main()
{
    float diameter, area;
    printf("Enter the diameter of the rhombus: ");
    scanf("%f", &diameter);
    area = (0.5 * diameter * diameter);
    printf("The area of the rhombus is: %f", area);
    getch();
    return 0;
}