#include <stdio.h>
#include <stdlib.h>

// function to print pattern
void prints(int **a, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

// function to compute pattern
void innerPattern(int n) {

    // pattern size
    int size = 2 * n - 1;
    int front = 0;
    int back = size - 1;
    int **a; // declare a pointer to pointer to store the array

    // allocate memory for the array
    a = (int **)malloc(size * sizeof(int *));
    for (int i = 0; i < size; i++) {
        a[i] = (int *)malloc(size * sizeof(int));
    }

    while (n != 0) {
        for (int i = front; i <= back; i++) {
            for (int j = front; j <= back; j++) {
                if (i == front || i == back ||
                    j == front || j == back) {
                    a[i][j] = n;
                }
            }
        }
        front++;
        back--;
        n--;
    }
    prints(a, size);

    // deallocate memory for the array
    for (int i = 0; i < size; i++) {
        free(a[i]);
    }
    free(a);
}

// driver code
int main() {

    // input
    int n;
    scanf("%d",&n);

    // function calling
    innerPattern(n);

    return 0;
}
