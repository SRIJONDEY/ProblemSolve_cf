#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    while(cin>>c)
    {
        if(c=='.') cout<<0;
        else
        {
            cin>>c;
            if(c=='.') cout<<1;
            else cout<<2;
        }
    }

}
