#include <iostream>
#include <vector>

using namespace std;

bool isDivisibleByDigits(int num) {
    int originalNum = num;
    while (num > 0) {
        int digit = num % 10;
        if (digit == 0 || originalNum % digit != 0) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main() {
    int N;
    cout << "Enter a value for N: ";
    cin >> N;

    cout << "Numbers divisible by their digits not exceeding " << N << ":\n";

    for (int i = 1; i <= N; ++i) {
        if (isDivisibleByDigits(i)) {
            cout << i << endl;
        }
    }

    return 0;
}