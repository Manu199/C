#include <stdio.h>

int main(void) {
    int a, b, c;
    // declared 3 variables

    scanf("%d", &a);
    // saving first number as variable a

    scanf("%d", &b);
    // saving second number as variable b


    if(a>b) {
        // If a is greater than b, swap their values
        c = a;  // Store the original value of a in the temporary variable c
        a = b;  // Assign b's value to a
        b = c;  // Assign the original value of a (stored in c) to b
    }
    // We successfully swapped the values of the two variables using a temporary variable

    printf("%d\n", b);

    // Finally, we print the greater value

}
