// Write a C program that prompts the user to input a series of numbers until they input a duplicate number. Use a while loop to check for duplicates.

#include <stdio.h>

int main()
{
    int arr[100];
    int n, count = 0, duplicate = 0;

    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &n);

        // Check for duplicate
        duplicate = 0;
        for (int i = 0; i < count; i++)
        {
            if (arr[i] == n)
            {
                duplicate = 1;
                break;
            }
        }

        if (duplicate)
        {
            printf("Duplicate number detected: %d\n", n);
            break;
        }

        // Store number in array
        arr[count] = n;
        count++;
    }

    printf("\nNumbers entered before duplicate:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
