#include <iostream>
using namespace std;

int main() {

    int N, factN=1, k;
    cin >> N; 
    for (k = 1; k <= N; k++) {
        factN = factN * k;
    }

    for (int i = 2; i <= factN; ++i) {
        if (factN % i == 0) {
            int exponent = 0;
            while (factN % i == 0) {
                factN /= i;
                ++exponent;
            }

            cout << i << "^" << exponent << " ";
        }
    }
    return 0;
}