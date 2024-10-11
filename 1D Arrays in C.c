#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, sum = 0;
    scanf("%d", &n); // read the size of the array
    int *arr = (int*)malloc(n * sizeof(int)); // allocate memory for the array
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // read the elements of the array
        sum += arr[i]; // add the element to the sum
    }
    printf("%d\n", sum); // print the sum
    free(arr); // free the memory
    return 0;
}
