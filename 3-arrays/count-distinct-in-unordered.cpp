#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    int* arr = new int[n];
    bool isDistinct = true;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        isDistinct = true;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isDistinct = false;
                break;
            }
        }
        if (isDistinct) {
            count++;
        }
    }
    cout << "Distinct Elements: " << count << endl;
    delete[] arr;
    return 0;
}
