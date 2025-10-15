//Q14.Input three sides of a triangle and display the types of triangle as per
//validation rule.
#include <stdio.h>

int main() {
    float a, b, c;

    // Input three sides of the triangle
    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check if valid triangle using triangle inequality
    if (a + b > c && a + c > b && b + c > a) {
        // Valid triangle
        if (a == b && b == c) {
            printf("The triangle is Equilateral.\n");
        } else if (a == b || b == c || a == c) {
            printf("The triangle is Isosceles.\n");
        } else {
            printf("The triangle is Scalene.\n");
        }
    } else {
        // Invalid triangle
        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
