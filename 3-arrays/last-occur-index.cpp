#include <iostream>
using namespace std;

int main() {
    int n, num;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cin >> num;

    int lastIndex = -1; // To store the index of the last occurrence

    for (int i = 0; i < n; ++i) {
        if (arr[i] == num) {
            lastIndex = i; // Update lastIndex when the number is found
        }
    }

    if (lastIndex != -1) {
        cout << "Last Occurrence Index: " << lastIndex << endl;
    }
    else {
        cout << "Not Found" << endl;
    }

    delete[] arr; 
    return 0;
}
