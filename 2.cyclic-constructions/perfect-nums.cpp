#include <iostream>
using namespace std;


int main() {
    int N, i, j, sumOfDivisors;
    cin >> N;

    for (i = 1; i <= N; ++i) {
        sumOfDivisors = 0;

        for (j = 1; j < i; ++j) {
            if (i % j == 0) {
                sumOfDivisors += j;
            }
        }

        if (sumOfDivisors == i) {
            cout << i << " ";
        }
    }

    return 0;
}