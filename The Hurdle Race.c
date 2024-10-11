#include<stdio.h>
int main()
{
    int n,z,i,m;
    scanf("%d%d",&n,&z);
    int ara[n];
    for(i=0;i<n;i++){
        scanf("%d",&ara[i]); // store the user input in the array
    }
    m=ara[0];
    for(i=0;i<n;i++){
        if(m<ara[i]){ 
            m=ara[i];
        }
        
    }
    if(m>z){
    printf("%d",m-z);
    }
    else{
        printf("0");
    }
    return 0;
}
