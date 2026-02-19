#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> a(n), b;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    b = a;
    sort(b.begin(), b.end());

    int l = 0, r = n - 1;

    while (l < n && a[l] == b[l])
        l++;

    while (r >= 0 && a[r] == b[r])
        r--;

    if (l >= r) {
        cout << "yes\n1 1\n";
        return 0;
    }

    reverse(a.begin() + l, a.begin() + r + 1);

    if (a == b) {
        cout << "yes\n";
        cout << l + 1 << " " << r + 1 << endl;
    } else {
        cout << "no\n";
    }

    return 0;
}
