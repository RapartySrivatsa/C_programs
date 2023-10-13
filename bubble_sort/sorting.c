#include <stdio.h>

void sort(char array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void print(char array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c ", array[i]);
    }
}
int main()
{
    char array[] = {'F', 'A', 'C', 'D', 'F', 'G'};
    // int array[] = {9, 7, 6, 8, 2, 4, 3, 1};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);
    print(array, size);

    return 0;
}