#include <stdio.h>

#define PI 3.14

void main()
{
    float radius, area;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area of circle = %.2f\n", area);
}
