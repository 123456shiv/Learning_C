#include <stdio.h>

int main() {
    int number, originalNumber;
    int firstDigit, lastDigit;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    originalNumber = number;

    // Check if the number is exactly 3 digits
    if (number >= 100 && number <= 999) {
        
        firstDigit = number / 100;

        lastDigit = number % 10;

        if (firstDigit == lastDigit) {
            printf("%d is a palindrome number.\n", originalNumber);
        } else {
            printf("%d is not a palindrome number.\n", originalNumber);
        }

    } else {
        printf("Error: Please enter a valid 3-digit number (100 to 999).\n");
    }

    return 0;
}