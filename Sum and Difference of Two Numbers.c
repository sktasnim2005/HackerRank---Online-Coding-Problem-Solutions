#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a=10,b=4;
    float c=4.0,d=2.0;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%f\n",&c);
    scanf("%f\n",&d);
    printf("%d %d\n",a+b,a-b);
    printf("%.1f %.1f\n",c+d,c-d);
    
    return 0;
}
