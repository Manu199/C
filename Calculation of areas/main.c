#include <math.h>
#include <stdio.h>

#define PI 3.14159265358979323846

int main(void) {
    int num;
    double square, circleArea, equiTriangleArea;

    printf("Enter a number 'D' : ");
    if (scanf("%i", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    square = (double)num * num;

    double radius = num / 2.0;
    circleArea = PI * radius * radius;

    equiTriangleArea = (sqrt(3.0) / 4.0) * square;

    printf("The area of a square with side D is: %.2f\n", square);
    printf("The area of a circle with diameter D is: %.2f\n", circleArea);
    printf("The area of an equilateral triangle with side D is: %.2f\n", equiTriangleArea);

    return 0;
}