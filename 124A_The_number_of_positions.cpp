#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,a,b;
    cin>> n >> a >> b;

    int start = max(a+1,n-b);
    cout<< n - start + 1 << "\n";
}