#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int copyNum;
    int count = 0;
    cin >> n;
    for (int i = pow(10, n - 1); i < pow(10, n); i++) {
        copyNum = i;
        bool idNums = false;
        int lastDigit = copyNum % 10;
        copyNum /= 10;

        while (copyNum > 0) {
            int digit = copyNum % 10;

            if (digit == lastDigit) {
                idNums = true;
                break;
            }
            lastDigit = digit;
            copyNum /= 10;
        }
        if (idNums == false) {
            count++;
        }
    }
    cout << count;
    //o(n * 10^n)
    return 0;
}