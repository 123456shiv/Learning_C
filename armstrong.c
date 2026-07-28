#include<stdio.h>
#include<conio.h>

    int main()
{
    int num, firstDigit, secondDigit, thirdDigit, sum;

    printf("Enter a three-digit integer: ");
    scanf("%d", &num);

    firstDigit = num / 100;          
    secondDigit = (num / 10) % 10;   
    thirdDigit = num % 10;           

    sum = (firstDigit * firstDigit * firstDigit) + 
          (secondDigit * secondDigit * secondDigit) + 
          (thirdDigit * thirdDigit * thirdDigit);

    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}