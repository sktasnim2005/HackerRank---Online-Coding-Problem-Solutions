#include <stdio.h>
#include <string.h>
#include <ctype.h> // for toupper function
int main()
{
    int hh, mm, ss;
    char x; // use char to store AM/PM indicator
    // check the return value of scanf
    if (scanf("%02d:%02d:%02d %c", &hh, &mm, &ss, &x) != 4) {
        printf("Invalid input\n");
        return 1;
    }
    // convert the AM/PM indicator to uppercase
    x = toupper(x);
    if (x == 'A') {
        if (hh == 12) { // 12 AM is 0 in 24-hour format
            hh = 0;
        }
    }
    else if (x == 'P') { // no need for else if, only two possible values
        if (hh != 12) { // 12 PM is 12 in 24-hour format
            hh += 12;
        }
    }
    else { // handle any unexpected cases
        printf("Invalid input\n");
        return 1;
    }
    // use consistent formatting for output
    printf("%02d:%02d:%02d\n", hh, mm, ss);
    return 0;
}
