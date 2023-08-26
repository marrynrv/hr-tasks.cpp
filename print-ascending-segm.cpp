#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];  

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++) {
        if (arr[i] > arr[i - 1]) {
            cout << arr[i - 1] << " ";
        }
        if (arr[i] <= arr[i - 1]) {
            cout << arr[i - 1] << "\n";
        }
        if (i == n - 1 && arr[i] == arr[i - 1]) {
            break;
        }
    }

    delete[] arr;  
    return 0;
}