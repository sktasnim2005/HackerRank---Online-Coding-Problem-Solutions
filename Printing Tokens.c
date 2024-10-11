#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100000];
    scanf("%[^\n]s", str);

    for (int i = 0; i < 100000; i++) {
        if (str[i] == '\0') {
            break;} 
        else if (isspace(str[i])) { 
                              printf("\n");
        } 
        else {
            printf("%c", str[i]); 
        }
    }
    printf("\n");
    
    return 0;
}
