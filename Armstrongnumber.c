#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int digit=0;
    int t=n;
    while (t)
    {
        digit++;
        t/=10;
    };
    t=n;
    int res=0;
    while (t)
    {
        int d = t%10;
        int r=1;
        int power=digit;
        while(power)
        {
            r*=d;
            power--;
        }
        res+=r;
        t/=10;
    };
    if(n==res)printf("Armstrong Number");
    else printf("NOT Armstrong Number!!!");

    return 0;
}

