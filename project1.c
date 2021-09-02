#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int guess_num; // The number to be guessed by the user
    srand(time(0));
    guess_num = rand() % 100 + 1; // we wnt numbers to be between 1 to 100. Thus modulus 100 will give us the remainder and "+1" to not get 0 as a number.

    int num;       // Initializing "num" variable
    int count = 0; // initializing and declaring "count" variable to maintain the count

    printf("\n\n################YOU HAVE TO GUESS THE NUMBER!!!##################\n\n");
    printf("+++++A Random Number is selected by machine you have to guess that number++++++\n\n");

    // Using loop so that user can continuously guess the number in every iteration.
    for (int i = 1; i <= 100; i++)
    {
        printf("-------Enter the Integer Number-------\n");
        scanf("%d", &num);

        if (num < guess_num)
        {
            printf("The number entered by you is small !\n");
            count = count + 1;
        }
        else if (num > guess_num)
        {
            printf("The number entered by you is big !\n");
            count = count + 1;
        }
        else if (num = guess_num)
        {
            printf("GOOD WORK!!! You have correctly guessed the number.\n");
            count = count + 1;
            printf("YESSS!!! THE NUMBER IS %d.\n", guess_num);
            printf("\n********YOU HAVE COMPLETED THIS GAME IN %d ITERATIONS :)**********", count);
            break;
        }
    }
}