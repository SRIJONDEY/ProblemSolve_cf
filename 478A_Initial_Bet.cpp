#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int c1,c2,c3,c4,c5;
    cin>>c1>>c2>>c3>>c4>>c5;
    int sum = c1 + c2 + c3 + c4 + c5;

    if(sum % 5 != 0 || sum == 0){
        cout<< -1 << "\n";
    }else{
        cout<< sum/5 << "\n";
    }
    return 0;
}