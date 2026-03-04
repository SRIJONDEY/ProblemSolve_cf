#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int ans=0;
    int t=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==0) t++;
        else t= 0;
        ans= max(ans,t);
    }
    cout<<ans<<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}