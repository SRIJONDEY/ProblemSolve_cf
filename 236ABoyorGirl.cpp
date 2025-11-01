#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cin >> name;

    set<char> s(name.begin(), name.end()); // Insert all characters into set

    cout << (s.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
    return 0;
}
