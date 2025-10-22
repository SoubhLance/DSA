//Write a C program that generates a random number between 1 and 20 and asks the user to guess it. Use a while loop to give the user multiple chances until they guess the correct number.

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main()
{
    int number;
    srand(time(0)); // seed the random number generator
    int guessed_number = (rand() % 20) + 1; // random number between 1 and 20
    while(1)
    {
        printf("Enter any number");
        scanf("%d",&number);
        if (number>20)
        {
            printf("You Dumbo its written from 1 to 20\n");
            continue;
        }
        else if (number==guessed_number)
        {
            printf("Correct Guess!!");
            break;
        }
        else
        {
            continue;
        }
    }
    
}