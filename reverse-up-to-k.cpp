#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int k;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cin >> k;

    // Print the first part of the pattern
    for (int i = k - 1; i >= 0; --i) {
        cout << arr[i] << " ";
    }

    // Print the second part of the pattern
    for (int i = k; i < n; ++i) {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}

