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
    for (int i = 0; i < k - 1; i++) {
        cout << arr[i] << " ";
    }

    for (int i = n-1; i > k-2; i--) {
        cout << arr[i] << " ";
    }
    delete[] arr;

    return 0;
}