#include <stdio.h>

int main()
{
    double num1;
    double num2;
    double dummy;
    char operator;

    printf("\nEnter an operator from these (+ - / *): ");
    scanf("%c", &operator);

    printf("\nEnter an number1 and number2 to calculate: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator)
    {
    case '+':
        dummy = num1 + num2;
        printf("result: %lf", dummy);
        break;

    case '-':
        dummy = num1 - num2;
        printf("result: %lf", dummy);
        break;

    case '*':
        dummy = num1 * num2;
        printf("result: %lf", dummy);
        break;

    case '/':
        dummy = num1 / num2;
        printf("result: %lf", dummy);
        break;

    default:
        printf("Please enter the correct operation again!!");
        break;
    }
}