//WAP to   print the position of the smallest of n numbers in an array

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[10];
    for(int i=0;i<=10;i++)
    {
        arr[i]=rand()%100;
    }

    for(int i=0;i<=10;i++)
    {
        printf("%d\n",arr[i]);
    }
}