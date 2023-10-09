#include <stdio.h>
#include <math.h>

int main()
{
    double radius = 2;
    double circum;
    double area;

    /*printf("Enter the value of radius: ");
    scanf("%f", &radius);*/

    circum = 2 * M_PI * radius;
    area = M_PI * radius * radius;

    printf("\ncircumference: %lf", circum);
    printf("\narea: %lf", area);

    return 0;
}