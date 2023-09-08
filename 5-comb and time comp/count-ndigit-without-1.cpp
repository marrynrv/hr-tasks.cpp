#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int countOfOne = 0;
    int countOfNotOne = 0;
    cin >> n;

    for (int i = pow(10, n - 1); i < pow(10, n); i++) {
        int copyN = i;
        bool containOne = false;

        while (copyN != 0) {
            int digit = copyN % 10;
            if (digit == 1) {
                containOne = true;
                break;
            }
            copyN /= 10;
        }

        if (containOne) {
            countOfOne++;
        }
        else {
            countOfNotOne++;
        }
    }

    cout << countOfOne << endl;
    cout << countOfNotOne << endl;
    return 0;
}
