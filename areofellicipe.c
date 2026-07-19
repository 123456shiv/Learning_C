#include <stdio.h>
#include <conio.h>

int main() 
{
    float a, b, area;

    printf("Enter the value of a (semi-major axis): ");
    scanf("%f", &a);
    printf("Enter the value of b (semi-minor axis): ");
    scanf("%f", &b);

    area = 3.14159 * a * b; 

    printf("The area of ellipse is: %f\n", area);
    return 0;
}