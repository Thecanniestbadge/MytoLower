// Programmer:		Thecanniestbadge
// Date:			7/12/2023
// Program Name:	MyToLower
// Chapter:			Functions
// Description:		This program demonstrates a custom implementation of the _strlwr function in C. 
//                  The MyToLower function converts all uppercase letters in a string to lowercase.

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <string.h> // Needed for string operations

// This is the custom function that imitates _strlwr()
// It takes a pointer to a string as an argument
void MyToLower(char *str) {
    // Iterate over the string until the null terminating character is found
    for (int i = 0; str[i] != '\0'; i++) {
        // If the current character is uppercase
        if (str[i] >= 'A' && str[i] <= 'Z') {
            // Convert it to lowercase
            str[i] = str[i] + ('a' - 'A');
        }
    }
}

int main(void) {
    // Declare two character arrays to hold the original input and its copy
    char original[21];
    char copy[21];

    // Prompt the user to enter a string
    printf("Enter a string: ");

    // Read the string from the standard input (keyboard) 
    fgets(original, 21, stdin);

    // Copy the original string to the copy variable
    strcpy(copy, original);

    // Remove newline character from fgets
    original[strcspn(original, "\n")] = 0;
    copy[strcspn(copy, "\n")] = 0;

    // Print the original string
    printf("The string you entered was: %s\n", original);
    printf("\n"); // Blank line

    // Convert the original string to lowercase using _strlwr() and print it
    _strlwr(original);
    printf("Using _strlwr() to convert the original string: %s\n", original);

    // Convert the copy of the string to lowercase using MyToLower() and print it
    MyToLower(copy);
    printf("Using MyToLower() to convert the copy of the string: %s\n", copy);

    printf("\n"); // Blank line
    return 0;
} // end main()

