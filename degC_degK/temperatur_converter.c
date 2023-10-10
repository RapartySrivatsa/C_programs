#include <stdio.h>
#include <ctype.h>

int main()
{

    /*  For directly converting the Celsius to Fahrenheit value:
        float unit_celsius;
        float unit_fahrenheit;

        printf("\nEnter the value that you want to convert into def_F: ");
        scanf("%lf", &unit_celsius);

        unit_fahrenheit =   (unit_celsius * 9/5) + 32;
    */

    // Using switch statement for getting a prompt from the user:
    char unit;
    float temp;
    float dummy;

    printf("\nIs the temp in C or F: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    switch (unit)
    {
    case 'C':
        printf("\nEnter the value of deg_C to convert into deg_F: ");
        scanf("%f", &dummy);

        temp = (dummy * 9 / 5) + 32;

        printf("The value of temp in deg_F is: %f", temp);
        break;

    case 'F':
        printf("\nEnter the value of deg_F to convert into deg_C: ");
        scanf("%f", &dummy);

        temp = (dummy - 32) * 5 / 9;

        printf("The value of temp in deg_F is: %f", temp);
        break;

    default:
        printf("please enter either C or F value again!!");
        break;
    }
}
