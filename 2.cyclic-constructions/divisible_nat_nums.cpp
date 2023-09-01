#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int i;
    bool isDivisible = true;
    for (i = 1; i <= N; ++i) {
        int originalNum = i;
        isDivisible = true;
        while (originalNum > 0) {
            int digit = originalNum % 10;
            if (digit == 0 || i % digit != 0) {
                isDivisible = false;
            }
            originalNum /= 10;
        }
        if (isDivisible) {
            cout << i << " ";
        }
    }
    return 0;
}





/* #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
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
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        if (isDivisibleByDigits(i)) {
            cout << i << " ";
        }
    }
    return 0;
} */


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