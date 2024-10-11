#include <stdio.h>
int main() {
    int n,l,b,i,sum=0,x;
    scanf("%d%d",&n,&l); // read n and l first
    int ara[n]; // declare ara[n] after reading n
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    scanf("%d",&b);
    for(i=0;i<n;i++){
        sum+=ara[i];
    }
    x=(sum-ara[l])/2;
    if(b==x){
        printf("Bon Appetit");
    }
    else{
        printf("%d",b-x);
    }
    return 0;
}

