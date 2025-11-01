#include <iostream>
using namespace std;

// Function to check if all digits are distinct
bool hasDistinctDigits(int year)
{
    bool seen[10] = {false}; // For digits 0-9
    while (year > 0)
    {
        int digit = year % 10;
        if (seen[digit])
        return false; // Digit already seen
        seen[digit] = true;
        year /= 10;
    }
    return true;
}

int main()
{
    int y;
    cin >> y;

    while (true)
    {
        y++; // Go to next year
        if (hasDistinctDigits(y))
        {
            cout << y << endl;
            break;
        }
    }

    return 0;
}
/*📦 Full Example with year = 2013
year = 2013
→ last digit: 3
→ seen[3] = false → mark seen[3] = true
→ year = 201

year = 201
→ last digit: 1
→ seen[1] = false → mark seen[1] = true
→ year = 20

year = 20
→ last digit: 0
→ seen[0] = false → mark seen[0] = true
→ year = 2

year = 2
→ last digit: 2
→ seen[2] = false → mark seen[2] = true
→ year = 0

✅ All digits are unique → function returns true.

🛑 If year = 1990
digit = 0 → mark seen

digit = 9 → mark seen

digit = 9 → already seen → return false*/


