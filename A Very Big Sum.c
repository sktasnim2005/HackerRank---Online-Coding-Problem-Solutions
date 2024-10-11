#include <stdio.h>
int main()
{
    int n;
    double sum=0;
    scanf("%d",&n);
    int ara[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ara[i]);
        sum+=ara[i];
    }
    printf("%.lf",sum);
    return 0;
}
