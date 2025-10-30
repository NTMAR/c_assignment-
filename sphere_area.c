//Q6.Write a program to calculate the volume and surface area of a sphere
#include <stdio.h>

int main() {
    const float PI = 3.1416;  // Define pi as a constant
    float radius, volume, surfaceArea;

    // Input radius from user
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Calculate volume and surface area
    volume = (4.0 / 3.0) * PI * radius * radius * radius;
    surfaceArea = 4 * PI * radius * radius;

    // Display results
    printf("Volume of the sphere = %.2f\n", volume);
    printf("Surface area of the sphere = %.2f\n", surfaceArea);

    return 0;
}
