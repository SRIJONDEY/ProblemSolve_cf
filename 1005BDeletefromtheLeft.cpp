#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    int ans= s.size() + t.size();
    while(s.size() && t.size() && s.back() == t.back())
    {
        ans-=2;
        s.pop_back();
        t.pop_back();
    }
    cout<<ans;
    return 0;
}
