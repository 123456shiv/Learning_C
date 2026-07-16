#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c, d, e;
    float average;
    printf("Enter 5 numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    average = (a + b + c + d + e) / 5.0;
    printf("Average: %.2f", average);
    getch();
    return 0;
}   