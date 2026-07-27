#include <stdio.h>
#include <conio.h>

int main() {
    double num;

    printf("Enter a number: ");
    if (scanf("%lf", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("The absolute value using library function is: %g\n", (num < 0) ? -num : num);

    return 0;
}