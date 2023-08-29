#include <iostream>
using namespace std;

int main() {
    int N,i;
    cin >> N;

    int *arr = new int[N];

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    i = 0;
    while (i < N - 1) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            i = 0;
        }
        else {
            i++;
        }
    }

    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}
