#include <iostream>


using namespace std;


bool isDivisibleByDigits(int num) {
    int originalNum = num;
    for (int digit = num % 10; num > 0; num /= 10) {
        if (digit == 0 || originalNum % digit != 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        if (isDivisibleByDigits(i)) {
            cout << i << " ";
        }
    }

    return 0;
}



/* bool isDivisibleByDigits(int num) {
    int originalNum = num;
    while (num > 0) {
        int digit = num % 10;
        if (digit == 0 || originalNum % digit != 0) {
            return false;
        }
        num /= 10;
    }
    return true;
} */