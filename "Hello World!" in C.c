#include <stdio.h> // include the header file for input/output functions

int main()
{
    char s[100]; // declare a char array to store the input string
    if (fgets(s, 100, stdin) != NULL) // read the input string and check for errors
    {
        printf("Hello, World!\n%s\n", s); // print the two strings with newlines
    }
    else
    {
        printf("Error reading input\n"); // print an error message
    }
    return 0; // return 0 to indicate success
}

