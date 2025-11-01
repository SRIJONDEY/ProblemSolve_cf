#include <math.h>
int main(){
    int n; scanf("%d",&n);
    int sz= (int)log2(n) + 1;
    int a[sz];
    int i=0;
    while (n)
    {
        int r = n%2;
        a[i]=r;
        n/=2;
        i++;
    };
    for (int i = sz-1; i>=0; i--)
    {
        printf("%d",a[i]);
    }


    return 0;
}
