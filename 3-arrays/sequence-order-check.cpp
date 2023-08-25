#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, i;
    bool isProg = true;

    // Read the number of elements
    cin >> n;

    // Dynamically allocate memory for the array
    int* arr = new int[n];

    // Read the array elements
    for (i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // If the array size is too small, print "Neither" and exit
    if (n <= 2) {
        cout << "Neither";

        // Deallocate the dynamically allocated memory
        delete[] arr;
        return 0;
    }

    // Calculate the initial difference between elements
    int d = arr[1] - arr[0];

    // Check if the array is arithmetic or not
    for (i = 1; i < n; ++i) {
        if (arr[i] - arr[i - 1] != d) {
            cout << "Neither";
            isProg = false;
            break;
        }
    }

    // If the array is arithmetic
    if (isProg) {
        if (d < 0) {
            cout << "Descending";
        }
        else if (d > 0) {
            cout << "Ascending";
        }
        else {
            cout << "Constant";
        }
    }

    // Deallocate the dynamically allocated memory
    delete[] arr;
    return 0;
}
