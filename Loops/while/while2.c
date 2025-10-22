// Write a C program that prompts the user to input a series of integers until the user stops entering 0 using a while loop. Calculate and print the sum of all the positive integers entered.

#include <stdio.h>

int main()
{
    int number, sum = 0;

    while (1)
    {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &number);

        if (number == 0)
        {
            break;
        }

        if (number > 0)
        {
            sum += number;
        }
    }

    printf("\nSum of positive numbers: %d\n", sum);
    return 0;
}

