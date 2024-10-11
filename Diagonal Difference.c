#include <stdio.h>
int main()
{
    int n,sum1=0,sum2=0;
    scanf("%d",&n);
    int ara[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&ara[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum1+=ara[i][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==n-1){
                sum2+=ara[i][j];
            }
        }
    }
    printf("%d",abs(sum1-sum2));
    return 0;
}
