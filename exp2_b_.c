#include <stdio.h>

int main() {
    float radius, side, length, breadth;
    float area_circle, perimeter_circle;
    float area_square, perimeter_square;
    float area_rectangle, perimeter_rectangle;

    // Circle
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    area_circle = 3.14 * radius * radius;
    perimeter_circle = 2 * 3.14 * radius;

    printf("\nArea of Circle = %.2f", area_circle);
    printf("\nPerimeter of Circle = %.2f\n", perimeter_circle);

    // Square
    printf("\nEnter side of square: ");
    scanf("%f", &side);
    area_square = side * side;
    perimeter_square = 4 * side;

    printf("\nArea of Square = %.2f", area_square);
    printf("\nPerimeter of Square = %.2f\n", perimeter_square);

    // Rectangle
    printf("\nEnter length and breadth of rectangle: ");
    scanf("%f %f", &length, &breadth);
    area_rectangle = length * breadth;
    perimeter_rectangle = 2 * (length + breadth);

    printf("\nArea of Rectangle = %.2f", area_rectangle);
    printf("\nPerimeter of Rectangle = %.2f\n", perimeter_rectangle);

    return 0;
}

