#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, H;
    cin >> N >> H;
    int Ans = 0;
    while (N--)
    {
        int W;
        cin >> W;
        if (W > H)
            Ans += 2;
        else
            Ans += 1;
    }
    cout << Ans << endl;
    return 0;
}
