#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

char board[3][3];
const char player = 'X';
const char computer = 'O';

// Prototyping the functions to check them!
void resetBoard();
void printBoard();
int checkFreespace();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

int main()
{
    char winner = ' ';
    char response = ' ';

    do
    {
        winner = ' ';
        response = ' ';
        resetBoard();

        while (winner = ' ' && checkFreespace() != 0)
        {
            printBoard();

            playerMove();
            winner = checkWinner();
            if (winner != ' ' || checkFreespace() == 0)
            {
                break;
            }

            computerMove();
            winner = checkWinner();
            if (winner != ' ' || checkFreespace() == 0)
            {
                break;
            }
        }

        printBoard();
        printWinner(winner);

        // To replay again the game! using the do,while
        printf("\n Would you like to play again? (Y/N): ");
        scanf("%*c");
        scanf("%c", &response);
        response = toupper(response);
    } while (response == 'Y');
}

// reset the board before starting the game
void resetBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

// printing the board in start or at the end.
void printBoard()
{
    printf("%c| %c| %c", board[0][0], board[0][1], board[0][2]);
    printf("\n-------------------\n");
    printf("%c| %c| %c", board[1][0], board[1][1], board[1][2]);
    printf("\n-------------------\n");
    printf("%c| %c| %c", board[2][0], board[2][1], board[2][2]);
}

// Check free space within
int checkFreespace()
{
    int freeSpaces = 9;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != ' ')
            {
                freeSpaces--;
            }
        }
    }
    return freeSpaces;
}

// Players moves until some input
void playerMove()
{
    int x;
    int y;

    do
    {
        printf("\nEnter row #(1-3): ");
        scanf("%d", &x);
        x--;
        printf("\nEnter column #(1-3): ");
        scanf("%d", &y);
        y--;

        if (board[x][y] != ' ')
        {
            printf("Invalid move, please try again! \n");
        }
        else
        {
            board[x][y] = player;
            break;
        }
    } while (board[x][y] != ' ');
}

// Computers move until some input
void computerMove()
{
    srand(time(0));
    int x;
    int y;
    if (checkFreespace() > 0)
    {
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        } while (board[x][y] != ' ');

        board[x][y] = computer;
    }
    else
    {
        printWinner(' ');
    }
}

// Checking the status of the game
char checkWinner()
{
    // Check rows
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][2] == board[2][i])
        {
            return board[i][0];
        }
    }
    // Check columns
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[0][1] && board[0][i] == board[1][i])
        {
            return board[0][i];
        }
    }
    // Check diagonals (R to L)
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
    {
        return board[0][0];
    }
    // Check diagonals (L to R)
    if (board[0][2] == board[1][1] && board[0][2] == board[2][0])
    {
        return board[0][2];
    }

    return ' ';
}

// assigning the winner value to print the winner
void printWinner(char winner)
{
    if (winner = player)
    {
        printf("\nYou Won!");
    }
    else if (winner = computer)
    {
        printf("\nYou Lose!");
    }
    else
    {
        printf("\nIt's a Tie!");
    }
}