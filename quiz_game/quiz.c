#include <stdio.h>
#include <ctype.h>

int main()
{
    char questions[][100] = {"1. What year did the C language debut?: ",
                             "2. Who is credited with creating C?:",
                             "3. What is the predecessor of C?: "};
    char options[][100] = {"A. 1969", "B. 1972", "C. 1975", "D. 1999",
                           "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
                           "A. Objective C", "B. B", "C. C++", "D. C#"};
    char answers[] = {'B', 'A', 'B'};

    int numberofquestions = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score = 0;

    printf("**Welcome to Quiz Game**\n");
    printf("Let the Game Begin!!\n");

    for (int i = 0; i < numberofquestions; i++)
    {
        printf("*************************************\n");
        printf("%s\n", questions[i]);
        printf("*************************************\n");

        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }

        printf("Guess: ");
        scanf("%c", &guess);
        scanf("%*c"); // To remove extra buffer from scanf

        guess = toupper(guess);

        if (guess == answers[i])
        {
            printf("Correct!\n");
            score++;
        }
        else
        {
            printf("Wrong!\n");
        }
    }
    printf("********************\n");
    printf("Final Score: %d/%d\n", score, numberofquestions);
    printf("********************");

    return 0;
}