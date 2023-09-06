#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;

    // Loop through numbers from 10^(n-1) to 10^n - 1
    for (int i = pow(10, n-1); i < pow(10, n); i++) {
        int num = i;
        bool hasConsecutiveZeros = false;

        int lastDigit = num % 10;
        num /= 10;

        // Check for consecutive zeros within the same number
        while (num > 0) {
            int digit = num % 10;

            if (digit == 0 && lastDigit == 0) {
                hasConsecutiveZeros = true;
                break;
            }

            lastDigit = digit;
            num /= 10;
        }

        // If there are no consecutive zeros, increment count and print the number
        if (!hasConsecutiveZeros) {
            
            count++;
        }
    }
    // O(n * 10^n)
    // Output the count of numbers without consecutive zeros
    cout << count;
    return 0;
}
