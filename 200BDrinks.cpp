#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,percent=0,total=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>percent;
        total+=percent;
    }
    cout<<total/n;

}
