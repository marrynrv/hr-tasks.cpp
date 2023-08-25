#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxIdx = 0;
    int minIdx = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIdx]) {
            maxIdx = i;
        }
        else if (arr[i] < arr[minIdx]) {
            minIdx = i;
        }
    }

    arr[maxIdx] = arr[maxIdx] + arr[minIdx];
    arr[minIdx] = arr[maxIdx] - arr[minIdx];
    arr[maxIdx] = arr[maxIdx] - arr[minIdx];

    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    delete[] arr;

    return 0;
}
