//Write a C program to print numbers from 0 to 10 and 10 to 0 using two while loops.

#include <stdio.h>

int main()
{
    int n = 0, p = 10;

    // Print 0 to 10
    while (n <= 10)
    {
        printf("%d ", n);
        n++;
    }

    printf("\n"); // for new line

    // Print 10 to 0
    while (p >= 0)
    {
        printf("%d ", p);
        p--;
    }

    return 0;
}
