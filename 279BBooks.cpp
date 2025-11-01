#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;  // Input: number of books and total free time

    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];  // Read time needed for each book
    }

    int start = 0, end = 0, maxBooks = 0;
    long long sum = 0;

    while (end < n) {
        sum += a[end];  // Add the time for the current book (at position end)

        // If the total time is too much, remove books from the start
        while (sum > t) {
            sum -= a[start];  // Subtract the time of book at position start
            start++;          // Move the start pointer forward
        }

        // Calculate how many books we are reading now
        int currentBooks = end - start + 1;

        // Update the maximum number of books we can read
        if (currentBooks > maxBooks)
            maxBooks = currentBooks;

        end++;  // Move to the next book
    }

    cout << maxBooks << endl;  // Print the result

    return 0;
}
