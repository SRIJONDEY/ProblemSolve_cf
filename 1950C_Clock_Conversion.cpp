#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    int x = stoi(s.substr(0, 2));
    int y = stoi(s.substr(3, 5));
    string z = (x >=12) ? "PM" : "AM";
    int a = x%12;
    if(a==0) a+=12;
    cout<< setfill('0') << setw(2) << a << ':' << setw(2)<< y <<' '<<z <<"\n";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--) solve();
}