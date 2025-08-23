//WAP to insert a number at a given location 

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        arr[i]=rand()%100;
    }
    printf("Original Array\n");
    for(int i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    int pos,val;
    printf("\nEnter the position the element to be inserted: ");
    scanf("%d",&pos);
    printf("\nEnter the value of the element to be inserted: ");
    scanf("%d",&val);

    for(int i = 10;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=val;

    for(int i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }

}