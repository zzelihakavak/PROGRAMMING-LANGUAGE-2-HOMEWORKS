
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
     srand(time(NULL));
    int dice1;
    int dice2;

    dice1 = 1 + rand() % 6;
    dice2 = 1 + rand() % 6;

    int conclusion;
    conclusion = dice1 + dice2;
    
    printf("sum of dice:%d \n", conclusion);

    if (conclusion == 7 || conclusion == 11)
        printf("YOU WON");

    if (conclusion == 2 || conclusion == 3 || conclusion == 12)
        printf("YOU LOST");

    if (conclusion == 4 || conclusion == 5 || conclusion == 6 || conclusion == 8 || conclusion == 9 || conclusion == 10)
        printf("YOUR SCORE:%d "
               "\nYOU MUST KEEP YOUR SCORE",
               conclusion);

    int dice3;
    int dice4;

    {
        do

        {
            printf("\n the dice are being rolled again \n");
            dice3 = 1 + rand() % 6;
            dice4 = 1 + rand() % 6;
            printf("\n your dice number is: %d", dice3);
            printf("and %d \n", dice4);
            if (dice3 + dice4 == 7)
            {
                printf("\nYOU LOST\n");
                return 0;
            }

            else if (dice3 + dice4 == conclusion)
            {
                printf("\nYOU WON\n");
                return 0;
            }
        } while (dice3 + dice4 != conclusion || dice3 + dice4 != 7);
    }

    return 0;
}
