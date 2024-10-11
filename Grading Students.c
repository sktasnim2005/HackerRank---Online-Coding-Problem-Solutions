#include <stdio.h>
int main()
{
    int T,n,x,y,z;
    scanf("%d",&T);
    for(int i=0;i<T;i++){
    scanf("%d",&n);
    x=(n/5);
    y=(x+1)*5;
    if(n>=38 && y-n>0 && y-n<3){ // changed the condition here
        z=y;
    }
    else if(n>100){
        return 0;
    }
    else{
        z=n;
    }
    
    printf("%d\n",z);

}


    return 0;
}
