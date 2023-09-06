#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int count = 0;

    cin >> n;

    for (int i = pow(10, n - 1); i < pow(10, n); i++) {
        int num = i;
        bool hasIdenticalDigits = false;

        while (num > 0) {
            int digit1 = num % 10;
            num /= 10;

            int tempNum = num;
            while (tempNum > 0) {
                int digit2 = tempNum % 10;
                tempNum /= 10;

                if (digit1 == digit2) {
                    hasIdenticalDigits = true;
                    break;
                }
            }

            if (hasIdenticalDigits) {
                count++;
                break;
            }
        }
    }
    // o(n^2 * 10^n)
    cout << count << endl;
    return 0;
}