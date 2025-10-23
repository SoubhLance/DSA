// Write a C program that calculates and prints the sum of cubes of even numbers up to a specified limit (e.g., 20) using a while loop.

#include<stdio.h>
#include<math.h>

int main()
{
    int n=20,i=1;
    int sum=0,cube;
    while(i<=n)
    {
        if(i%2==0)
        {
            cube=pow(i,3);
            sum+=cube;
        }
        i++;
    }
    printf("Sum of cubes of even numbers up to %d is: %d\n", n, sum);
    return 0;
}