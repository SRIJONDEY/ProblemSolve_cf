#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; // number of rooms

    int count = 0; // number of rooms George and Alex can move into

    for (int i = 0; i < n; i++)
    {
        int p, q;
        cin >> p >> q; // p = people in room, q = capacity

        if (q - p >= 2)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
