#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long endingWithZero = 1;
    long long notEndingWithZero = 9;

    if (n == 1) {
        cout << 10 << endl;  // For n = 1, there are 10 single-digit numbers.
    } else {
        for (int i = 2; i <= n; i++) {
            long long newEndingWithZero = notEndingWithZero;
            long long newNotEndingWithZero = (endingWithZero + notEndingWithZero) * 9;
            endingWithZero = newEndingWithZero;
            notEndingWithZero = newNotEndingWithZero;
        }
        
        cout << endingWithZero + notEndingWithZero << endl;
    }

    return 0;
}