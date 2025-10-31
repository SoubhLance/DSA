//Write a C program that prompts the user to input a series of integers until the user stops by entering 0 using a do-while loop. Calculate and print the sum of all positive integers entered.

#include<stdio.h>

int main()
{
    int number, sum = 0;
    do
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
    
    while (1);
    
    printf("\nSum of positive numbers: %d\n", sum);
    return 0;
}