#include <stdio.h>

int main(void) {

    int num1, num2;
    printf("Insert a number: ");
    scanf("%i", &num1);
    printf("\nInsert a second number: ");
    scanf("%i", &num2);

    printf("\nThe arithmetic mean is: %i", (num1 + num2) / 2);

    return 0;
}
