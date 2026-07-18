#include<stdio.h>
#include<conio.h>
int main()
 {   
        float a, b, h;

        printf("Enter the value of a: ");
        scanf("%f", &a);    
        printf("Enter the value of b: ");
        scanf("%f", &b);
        printf("Enter the value of h: ");
        scanf("%f", &h);

        float area = (1.0/2.0) * (a + b) * h;

        printf("The area of the trapezium is: %f", area);
        return 0;
    
}