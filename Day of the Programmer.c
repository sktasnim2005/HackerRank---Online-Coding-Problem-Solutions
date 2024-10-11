#include<stdio.h>
int main()
{
    int y,dd,mm;
    scanf("%d",&y);
    switch(y)
    {
        case 1918: // special case
            dd=26;
            mm=9;
            break;
        default: // normal cases
            if(y<1918) // Julian calendar
            {
                if(y%4==0) // leap year
                {
                    dd=12;
                    mm=9;
                }
                else // non-leap year
                {
                    dd=13;
                    mm=9;
                }
            }
            else // Gregorian calendar
            {
                if((y%400==0) || (y%4==0 && y%100!=0)) // leap year
                {
                    dd=12;
                    mm=9;
                }
                else // non-leap year
                {
                    dd=13;
                    mm=9;
                }
            }
    }
    printf("%02d.%02d.%d",dd,mm,y);
    return 0;
}
