#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int ara[n],i;
  for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
                            }
   for(i=0;i<n/2;i++){
        int temp=ara[i];
        ara[i]=ara[n-i-1];
        ara[n-i-1]=temp;
        
                            }
      for(i=0;i<n;i++){ 
       printf("%d ",ara[i]); }                    
}
