#include <stdio.h>
int main() {
    char input[10000];
    scanf("%s", input);
    int count[10] = {0};
    for (int i = 0; input[i] != '\0'; i++) {
        // Check if the current character is a digit
        if (input[i] >= '0' && input[i] <= '9') {
            // Subtract '0' to convert the character to its integer value
            int digit = input[i] - '0';
            // Increment the count for this digit
            count[digit]++;
        }
    }

    // Print the count for each digit from 0 to 9
    for (int i = 0; i < 10; i++) {
        printf("%d ",count[i]);
    }

    return 0;
}
