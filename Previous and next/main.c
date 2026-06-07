#include <stdio.h>

int main(void) {
    int number, i = 0;
    printf("Insert a integer: ");
    scanf("%i", &number);

    printf("The previous number is: %i\n", number - 1);

    printf("The next number is: %i\n", number + 1);

    return 0;
}
