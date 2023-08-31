#include <iostream>
using namespace std;


int main() {
    int N, i, j, sumOfDivisors;
    cin >> N;

    for (i = 1; i <= N; ++i) {
        sumOfDivisors = 0;      // Summarizing divisors for each i number

        for (j = 1; j < i; ++j) {
            if (i % j == 0) {   // Finding divisors of i number
                sumOfDivisors += j; // Summarizing divisors
            }
        }

        if (sumOfDivisors == i) {   // If sum of divisors is equal to number
            cout << i << " ";      // Print number
        }
    }

    return 0;
}