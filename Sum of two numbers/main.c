#include <stdio.h>

int main(void) {
    int number1 = 0;
    int number2 = 0;

    printf("Insert a number:");
    scanf("%i/n", &number1);

    printf("Insert a second number:");
    scanf("%i/n", &number2);

    printf("The sum is: %i", number1+number2);
}
