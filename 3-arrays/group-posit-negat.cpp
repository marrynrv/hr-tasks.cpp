/* #include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int* arr = new int[N];

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }

    bool is_sorted = false;
    while (!is_sorted) {
        is_sorted = true;
        for (int i = 0; i < N - 1; ++i) {
            if (arr[i] < 0 && arr[i + 1] >= 0) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                is_sorted = false;
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}
 */

#include <iostream>
using namespace std;

int main() {
    int N, i;
    cin >> N;

    int* arr = new int[N];

    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    i = 0;
    while (i < N - 1) {
        if (arr[i] < 0 && arr[i+1] >= 0) {
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
