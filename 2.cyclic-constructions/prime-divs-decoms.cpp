#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; 

    for (int i = 2; i <= N; ++i) {
        int exponent = 0;
        while (N % i == 0) {
            N /= i;
            ++exponent;
        }
        if(exponent > 0){
            cout << i << "^" << exponent << " ";
        }
    }

    return 0;
}
