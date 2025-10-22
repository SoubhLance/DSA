//Write a C program that calculates the product of numbers from 1 to 5 using a while loop.

#include <stdio.h>

int main()
{
    int number = 1, prod = 1;

    while (number <= 5)
    {
        prod = prod * number;
        printf("Current number: %d, Current product: %d\n", number, prod);
        number++;
    }

    printf("\nFinal Product (1 to 5): %d\n", prod);
    return 0;
}
