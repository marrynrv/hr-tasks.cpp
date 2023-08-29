#include <iostream>
using namespace std;

int main() {
    int n, countOfMin=0, countOfMax=0;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
  
    for (int i = 1; i < n-1; i++) {
        if (arr[i] < arr[i-1] && arr[i] < arr[i + 1]) {
            countOfMin++;
        }
        else if(arr[i] > arr[i-1] && arr[i] > arr[i + 1]) {
            countOfMax++;
        }
    }

    cout << "Local Minima: " << countOfMin << endl;
    cout << "Local Maxima: " << countOfMax << endl;

    delete[] arr;
    return 0;
}
