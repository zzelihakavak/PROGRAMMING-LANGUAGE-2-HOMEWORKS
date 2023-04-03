#include <stdio.h>
#include <stdlib.h>

void funtree(int height, int spaces)
{
    if (height <= 0)
    {
        return;
    }

    funtree(height - 1, spaces + 1);

    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }

    for (int i = 0; i < 2 * height - 1; i++)
    {
        printf("*");
    }

    printf("\n");
}

int main()
{
    int height = 3;
    funtree(height, height + 2);

    funtree(height + 2, height);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < height; j++)
        {
            printf(" ");
        }

        printf("    |\n");
    }

    return 0;
}