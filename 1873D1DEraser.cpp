#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int i = 0, ans = 0;

        while (i < n)
        {
            if (s[i] == 'B')
            {
                ans++;
                i += k; // skip the k cells that just got erased
            }
            else
            {
                i++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
