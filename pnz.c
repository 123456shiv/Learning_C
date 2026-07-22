#include<Stdio.h>
#include<conio.h>

int main()
{
    int a;

    printf("Enter a number:");
    scanf("%d",&a);

    if(a<0)
    {
        printf("The number is negative");
    }
    else if(a>0)
    {
        printf("The number is positive");
    }
    else
    {
        printf("The number is zero");
    }

    return 0;
}