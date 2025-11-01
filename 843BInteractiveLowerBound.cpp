#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, start, x;
    cin >> n >> start >> x;
    int answer = -1;
    int min_val = 1e9 + 1;

    // Check all nodes from 1 to n
    for (int i = 1; i <= n; ++i)
    {
        cout << "? " << i << endl;
        cout.flush();

        int val, nxt;
        cin >> val >> nxt;

        if (val >= x && val < min_val)
        {
            min_val = val;
            answer = val;
        }
    }

    cout << "! " << answer << endl;
    cout.flush();
    return 0;
}
