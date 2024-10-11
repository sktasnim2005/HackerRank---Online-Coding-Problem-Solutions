#include <stdio.h>
int main()
{
    int n;
    float pos=0,neg=0,zero=0;
    scanf("%d",&n);
    int ara[n]; // change this line
    for(int j=0;j<n;j++){
            scanf("%d",&ara[j]); // change this line
            if(ara[j]>0){ // change this line
                          pos++;
                           }
            else if(ara[j]<0){ // change this line
                          neg++;
                                }
            else{
                zero++;
            }
    }
    printf("%f\n",pos/n);
    printf("%f\n",neg/n);
    printf("%f\n",zero/n);   
    return 0;
}
