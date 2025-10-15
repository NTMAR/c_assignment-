//Q3.Input radius of circle and find out area and perimeter of a circle.
#include <stdio.h>
int main() {
    const float PI = 3.1416;  // Define pi as a constant variable
    float radius, area, perimeter;

    // Input radius from user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and perimeter
    area = PI * radius * radius;
    perimeter = 2 * PI * radius;

    // Display results
    printf("Area of the circle = %.2f\n", area);
    printf("Perimeter (Circumference) of the circle = %.2f\n", perimeter);

    return 0;
}
