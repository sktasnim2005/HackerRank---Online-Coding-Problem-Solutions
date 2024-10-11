#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int ara[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &ara[i]);
    }
    
    for(i = 0, j = n - 1; i <= n / 2,j>=n/2; i++, j--) {
        int ch = ara[i];
        ara[i] = ara[j];
        ara[j] = ch;
    }
    for(i = 0; i < n; i++) {
        printf("%d ", ara[i]); 
    }
    return 0;
}
