#include <stdio.h>
#include <conio.h>

int main() {
    int marks;

    printf("Enter the student's marks: ");
    scanf("%d", &marks);

    if (marks >= 40) {
        printf("Result: Passed\n");
    } else {
        printf("Result: Failed\n");
    }

    return 0;
}