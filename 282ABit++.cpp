#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count=0;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s[1]=='+')
            count+=1;
        else count-=1;
    }
    cout<<count;
    return 0;
}
