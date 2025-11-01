#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t; // Number of test cases

    while (t--)
    {
        long long n;
        cin >> n;

        int ans = 0;
        while (n >= 2050)
        {
            long long x = 2050;

            // Find the largest 2050 * 10^k <= n
            while (x * 10 <= n)
            {
                x *= 10;
            }

            n -= x;
            ans++;
        }

        if (n != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}

