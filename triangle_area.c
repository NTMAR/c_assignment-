//Q4.Input base and height of a triangle and calculate its area.
#include <stdio.h>

int main() {
    float base, height, area;

    // Input base and height from user
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    // Calculate area of triangle
    area = 0.5 * base * height;

    // Display the result
    printf("Area of the triangle = %.2f\n", area);

    return 0;
}
