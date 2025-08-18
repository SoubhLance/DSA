#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[10];

    srand(time(NULL)); // seed for randomness

    // initialize array with random values
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100; // numbers between 0–99
    }

    int small = arr[0];
    int pos = 0;

    // find smallest number
    for (int i = 1; i < 10; i++) {
        if (arr[i] < small) {
            small = arr[i];
            pos = i;
        }
    }

    // print the array
    printf("Array elements:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n\nSmallest number = %d at position = %d\n", small, pos);

    return 0;
}
