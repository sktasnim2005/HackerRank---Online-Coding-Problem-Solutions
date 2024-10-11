#include<stdio.h>
int main()
{
  int n,z;
  scanf("%d%d",&n,&z);
  int ara[n],i,j;
  for(i=0;i<n;i++){
        scanf("%d",&ara[i]); 
  }
  for(j=0;j<z;j++) { // z rotations                        
        int temp=ara[0]; //1st element in the temt
        for(i=0;i<n-1;i++){
            ara[i]=ara[i+1]; //shift the elements of the array by one to the left
        }
        ara[n-1]=temp; //assign the temp to the last position of the array
  }

  for(i=0;i<n;i++){ 
       printf("%d ",ara[i]); //print the rotated array
  }                    
}
