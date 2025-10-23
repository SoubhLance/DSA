//Write a C program that prompts the user to input a username. Use a while loop to keep asking for a username until a valid one is entered (e.g., at least 8 characters long).

#include <stdio.h>
#include <string.h>

int main() {
    char username[100];  // Bigger size just to be safe

    while (1) 
    {
        printf("Enter your username: ");
        scanf("%s", username);
        if (strlen(username) < 8) 
        {
            printf("Invalid username! It must be at least 8 characters long.\n\n");
        }
        else 
        {
            printf("Valid username accepted: %s\n", username);
            break; // exit the loop
        }
    }
    return 0;
}