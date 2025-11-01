#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int dom=0;
    for(int i=0; i<s.size(); i++)
    {
        if(isupper(s[i]))
            dom++;
        else
            dom--;
    }
    if(dom>0)
        for(auto &c:s) c=toupper(c);
    else
        for(auto &c:s) c=tolower(c);
    cout<<s<<endl;
}
