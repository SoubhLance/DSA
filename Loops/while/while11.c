//Write a C program that prompts the user to enter a positive integer. Use a while loop to print the multiplication table for that number up to 10.

#include<stdio.h>

int main()
{
    int n,i=0;
    printf("Enter any number");
    scanf("%d",&n);
    printf("Multiplication table for %d:\n", n);

    int prod;
    while(i<=10)
    {   
        prod=n*i;
        printf("%d * %d = %d\n", n, i, prod);
        i++;
    }
    return 0;
}