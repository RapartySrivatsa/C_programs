#include <stdio.h>

int main()
{
    char grade;
    // switch a better alternative to else if and if conditionals

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
        printf("Excellent\n");
        break;
    case 'B':
        printf("Very good\n");
        break;
    case 'C':
        printf("Good\n");
        break;
    case 'D':
        printf("Satisfactory\n");
        break;
    case 'F':
        printf("Take retry exam please\n");
        break;
    default:
        printf("please enter only valid grade from A to F please");
    }

    return 0;
}