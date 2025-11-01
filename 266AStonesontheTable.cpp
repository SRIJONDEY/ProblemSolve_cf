#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,min_count=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=1; i<n; i++)
    {
        if(s[i]==s[i-1])
            min_count+=1;
    }
    cout<<min_count;
    return 0;
}
