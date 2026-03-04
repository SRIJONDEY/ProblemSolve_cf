#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<char> numbers;

    // Extract only digits (ignore '+')
    for (char c : s) {
        if (c != '+') {
            numbers.push_back(c);
        }
    }

    // Sort digits in non-decreasing order
    sort(numbers.begin(), numbers.end());

    // Print in required format without extra '+'
    for (size_t i = 0; i < numbers.size(); i++) {
        cout << numbers[i];
        if (i != numbers.size() - 1) {
            cout << "+";
        }
    }

    return 0;
}