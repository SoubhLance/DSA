//Write a C program that implements a program to check if a given number is a palindrome using a while loop.

#include <stdio.h>

int main() {
    int n, t, rev = 0, s;

    printf("Enter any number: ");
    scanf("%d", &n);

    t = n;  // store original number

    while (n > 0) {
        s = n % 10;          // get last digit
        rev = rev * 10 + s;  // build reversed number
        n = n / 10;          // remove last digit
    }

    if (t == rev)
        printf("Palindrome number \n");
    else
        printf("Not a palindrome \n");

    return 0;
}
