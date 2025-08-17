// Initializing the array with even numbers

#include <stdio.h>

int main()
{
    int n;
    printf("Give the number of values to be in the array: ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        a[i] = i * 2;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);   
    }

    return 0;
}
