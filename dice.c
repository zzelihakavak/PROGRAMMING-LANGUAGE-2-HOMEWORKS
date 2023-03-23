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

    int result;
    result = dice1 + dice2;
    
    printf("sum of dice:%d \n", result);

    if (result == 7 || result == 11)
        printf("YOU WON");

    if (result == 2 || result == 3 || result == 12)
        printf("YOU LOST");

    if (result == 4 || result == 5 || result == 6 || result == 8 || result == 9 || result == 10)
        printf("YOUR SCORE:%d "
               "\nYOU MUST KEEP YOUR SCORE",
               result);

    int dice3;
    int dice4;

    {
        do

        {
            printf("\n the dice are being rolled again \n");
            dice3 = 1 + rand() % 6;
            dice4 = 1 + rand() % 6;
            printf("\n your dice number is= %d", dice3);
            printf("and %d \n", dice4);
            if (dice3 + dice4 == 7)
            {
                printf("\nYOU LOST\n");
                return 0;
            }

            else if (dice3 + dice4 == result)
            {
                printf("\nYOU WIN\n");
                return 0;
            }
        } while (dice3 + dice4 != result || dice3 + dice4 != 7);
    }

    return 0;
}
