#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N; // Input the range [M, N] for which we want to find friendly pairs

    // Loop through the range of numbers from M to N
    for (int a = M; a <= N; ++a) {
        int sumDivisorsA = 1; // Initialize sum of divisors for 'a' (including 1 as a divisor)

        // Calculate sum of divisors for 'a'
        for (int i = 2; i * i <= a; ++i) {
            if (a % i == 0) {
                sumDivisorsA += i;
                if (i != a / i) { // If the number is not a perfect square. You dont have to count the divisor twice.
                    sumDivisorsA += a / i; 
                }
            }
        }

        int b = sumDivisorsA; // Calculate 'b' using the sum of divisors of 'a'

        // Check if 'b' is within the range and its sum of divisors equals 'a'
        if (b > a && b <= N) {
            int sumDivisorsB = 1; // Initialize sum of divisors for 'b' (including 1 as a divisor)

            // Calculate sum of divisors for 'b'
            for (int i = 2; i * i <= b; ++i) {
                if (b % i == 0) {
                    sumDivisorsB += i;
                    if (i != b / i) { // The same for B. You dont have to count the divisor twice.
                        sumDivisorsB += b / i;
                    }
                }
            }

            // If the sum of divisors of 'b' equals 'a', print the friendly pair
            if (sumDivisorsB == a) {
                cout << "(" << a << ", " << b << ")" << endl; // Print the friendly pair (a, b)
            }
        }
    }

    return 0;
}
