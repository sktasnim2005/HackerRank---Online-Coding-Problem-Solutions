#include<stdio.h>
int main()
{
    int n,p,i,a,b;
    scanf("%d",&n);
    scanf("%d",&p);
    if(p%2==0){
         a=p/2; // from the front
         b=(n-p)/2; // from the back
    }
    else{
         a=(p-1)/2; // from the front
         b=(n-p+1)/2; // from the back
    }
    if(a>b){
      printf("%d",b);
    }
    else{
      printf("%d",a);
    }
    return 0;
}
