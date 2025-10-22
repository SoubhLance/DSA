//Write a C program that prompts the user to enter a positive integer. It then calculates and prints the factorial of that number using a while loop.

#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1; // use a larger type for big results

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of a negative number doesn't exist!\n");
    } else {
        int i = 1;
        while (i <= n) {
            factorial *= i;
            i++;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
