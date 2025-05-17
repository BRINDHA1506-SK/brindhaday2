#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, length, width, side, circle_area, rectangle_area, square_area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    circle_area = PI * radius * radius;
    printf("Area of the circle: %.2f\n", circle_area);
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    rectangle_area = length * width;
    printf("Area of the rectangle: %.2f\n", rectangle_area);

    printf("Enter the side of the square: ");
    scanf("%f", &side);
    square_area = side * side;
    printf("Area of the square: %.2f\n", square_area);

    return 0;
}