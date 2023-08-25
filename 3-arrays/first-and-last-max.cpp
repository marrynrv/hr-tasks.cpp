#include <iostream>
using namespace std;

int main() {
    int n,count=0;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxVal = arr[0];
    int firstOccurrence = 0;
    int lastOccurrence = 0;
    for (int i = 1; i < n; i++) {

        if (arr[i] > maxVal) {
            maxVal = arr[i];
            firstOccurrence = i;
        }
    }
    int result = maxVal;
    cout << "The maximum element is: " << maxVal << endl;

    for (int i = 0; i < n; i++) {
        if (arr[i] == result) {
            lastOccurrence = i;
            count++;
        }
    }
    cout << "The number of occurrences of the maximum element is: " << count << endl;
    cout << "The position of the first maximum element is: " << firstOccurrence << endl;
    cout << "The position of the last maximum element is: " << lastOccurrence << endl;
    delete[] arr;

    return 0;
}