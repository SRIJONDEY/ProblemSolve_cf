#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    int m = n - 1;
    int a = 2;

    while(std::gcd(m, a) > 1){
        a++;
    }

    cout << a << " " << m - a << " " << 1 << "\n";
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