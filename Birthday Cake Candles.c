#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int ara[n],i,largest,count=0;
  for(i=0;i<n;i++){
              scanf("%d",&ara[i]);
                            }
   largest=ara[0];
  for(i=0;i<n;i++){
              if(largest<ara[i]){
                            largest=ara[i];
                            count=1;
                              }
               else if(largest==ara[i]){
                          count++;
                                       }  
  }
                  printf("%d",count);
}
