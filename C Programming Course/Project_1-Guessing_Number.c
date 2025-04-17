#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess;
    for (;;)
    {
        printf("Enter your guess : ");
        scanf("%d", &guess);
        srand(time(0));
        number = rand() % 10 + 1; // Generate random number between 1-100
        printf("The number is %d\n", number);
        if (guess==number){
            printf("you won :)\n");
        }
        else{
            printf("You lose\n");
        }
    }
    // keep running the loop until the loop is guessed
    return 0;
}