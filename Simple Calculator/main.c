#include <stdio.h>

int main(void) {
    int num1, num2;
    printf("Insert first number: ");
    scanf("%i", &num1);
    printf("\nInsert second number: ");
    scanf("%i", &num2);

    printf("\nThe sum is: %i", num1 + num2);
    printf("\nThe subtraction is: %i", num1 - num2);
    printf("\nThe multiplication is: %i", num1 * num2);
    printf("\nThe division is: %i", num1 / num2);



    return 0;
}
