/* #include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i <= n-10; i++) {  
        bool found = true;
        for (int j = 0; j < 10; j++) {
            if (arr[i + j] != j + 1) {  
                found = false;
                break;
            }
        }
        if (found) {
            count++;  
        }
    }
    cout << "Occurrences of Subsequence: " << count << endl;
    delete[] arr;  
    return 0;
} */



#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int* sequence = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> sequence[i];
    }

    int targetSubsequence[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int subseqLength = sizeof(targetSubsequence) / sizeof(targetSubsequence[0]);

    int count = 0;
    int targetIndex = 0;
    for (int i = 0; i < n; ++i) {
        if (sequence[i] == targetSubsequence[targetIndex]) {
            ++targetIndex;
            if (targetIndex == subseqLength) {
                ++count;
                targetIndex = 0;
            }
        }
    }
    cout << "Occurrences of Subsequence: " << count << endl;
    delete[] sequence;
    return 0;
}