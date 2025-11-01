#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;  // Read number of people
    int opinion;
    bool isHard = false;

    for (int i = 0; i < n; ++i)
    {
        cin >> opinion;
        if (opinion == 1)
        {
            isHard = true;
            break;  // No need to check further
        }
    }

    if (isHard)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;

    return 0;
}
