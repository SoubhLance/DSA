//Write a C program to find and print the first 10 Fibonacci numbers using a while loop
//Fibonacc series 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144

#include <stdio.h>

int main() {
    int n1 = 0, n2 = 1, n3;
    int count = 1;

    printf("First 10 Fibonacci numbers:\n");

    while (count <= 10) {
        printf("%d ", n1);
        n3 = n1 + n2;  // next term
        n1 = n2;       // move forward
        n2 = n3;
        count++;
    }

    printf("\n");
    return 0;
}
