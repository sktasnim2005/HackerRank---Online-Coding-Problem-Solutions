#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s[] = "C"; // use double quotes to initialize a string
    char ch[] = "Language"; // use double quotes to initialize a string
    char sen[] = "Welcome To C!!"; // use double quotes to initialize a string
    scanf("%s\n", s); // use %s to read a string and s without & to pass the address
    scanf("%[^\n]\n", ch); // use %[^\n] to read a string until the newline
    scanf("%[^\n]\n", sen); // use %[^\n] to read a string until the newline
    printf("%s\n", s); // use %s to print a string
    printf("%s\n", ch); // use %s to print a string
    printf("%s\n", sen); // use %s to print a string
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
