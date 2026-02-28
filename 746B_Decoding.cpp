#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    string result(n, ' ');
    int mid;
    if(n % 2 == 1){
        mid = n / 2;
    } else {
        mid = n / 2 - 1;
    }

    int left = mid - 1;
    int right = mid + 1;
    result[mid] = s[0];

    for(int i = 1; i < n; i++){
        if(n % 2 == 1){   // if n is odd
            if(i % 2 == 1)
                result[left--] = s[i];
            else
                result[right++] = s[i];
        } else {          // if n is even
            if(i % 2 == 1)
                result[right++] = s[i];
            else
                result[left--] = s[i];
        }
    }

    cout << result << endl;
}