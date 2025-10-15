//Q5.Write a program to calculate the volume and surface area of a cube.
#include <stdio.h>
int main() {
    float side, volume, surfaceArea;

    // Input side length of the cube
    printf("Enter the side length of the cube: ");
    scanf("%f", &side);

    // Calculate volume and surface area
    volume = side * side * side;
    surfaceArea = 6 * side * side;

    // Display results
    printf("Volume of the cube = %.2f\n", volume);
    printf("Surface area of the cube = %.2f\n", surfaceArea);

    return 0;
}
