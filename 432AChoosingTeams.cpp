#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0,y;
    cin>>n>>k;
    while(n--)
    {
        cin>>y;
        if(y<=5-k) cnt++;
    }
    cout<<cnt/3;
}
