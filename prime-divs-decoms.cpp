#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Read the input natural number N

    // Print the prime divisors along with their exponents
    for (int i = 2; i <= N; ++i) {
        if (N % i == 0) {
            int exponent = 0;

            // Count the exponent of the prime divisor 'i'
            while (N % i == 0) {
                N /= i;
                ++exponent;
            }

            cout << i << "^" << exponent << " ";
        }
    }

    return 0;
}
