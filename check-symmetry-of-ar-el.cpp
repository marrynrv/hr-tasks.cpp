#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool isSymmetric = true; 

    for (int i = 0, j = n - 1; i < n / 2; i++, j--) {
        if (arr[i] != arr[j]) {
            isSymmetric = false;
            break; 
        }
    }

    if (isSymmetric) {
        cout << "Symmetrical";
    }
    else {
        cout << "Not Symmetrical";
    }

    delete[] arr;
    return 0;
}