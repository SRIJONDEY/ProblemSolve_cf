#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int time_left=240-k;
    int time_spent=0;
    int solve=0;
    for(int i=1; i<=n; i++)
    {
        time_spent+=i*5;
        if(time_spent<=time_left)
            solve++;
        else
            break;
    }
    cout<<solve;
}
