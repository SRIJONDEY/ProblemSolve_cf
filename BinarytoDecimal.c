#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    int d=0;
    while (n)
    {
        d+=(n%2);
        d*=2;
        n/=10;
    }; printf("%d",d);
    return 0;
}

