#include <iostream>
using namespace std;

int main() {
    int n, count = 1;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            count++;
        }
    }
    cout << "Distinct Elements: " << count << endl;
    delete[] arr;
    return 0;
}