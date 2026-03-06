// area of circle using ponit and function
#include<stdio.h>

void area(float *r, float *result)
{
    *result = 3.14 * (*r) * (*r);
}

int main()
{
    float radius, area_circle;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area(&radius, &area_circle);

    printf("Area of Circle = %.2f", area_circle);

    return 0;
}
