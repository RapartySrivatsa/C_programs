#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int min = 1;
    const int max = 100;
    int answer;
    int guess;
    int guesses = 0;

    srand(time(0));

    answer = (rand() % max) + min;

    do
    {
        printf("Enter a guess number: ");
        scanf("%d", &guess);

        if (guess > answer)
        {
            printf("Too high!!\n");
        }
        else if (guess < answer)
        {
            printf("Too low!!\n");
        }
        else
        {
            printf("Correct!!\n");
        }
        guesses++;
    } while (guess != answer);

    printf("***********************\n");
    printf("answer: %d\n", answer);
    printf("guesses: %d\n", guesses);
    printf("GAME OVER\n");
    printf("***********************");

    return 0;
}