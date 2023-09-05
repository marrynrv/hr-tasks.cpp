
#include <iostream>
using namespace std;

int main() {
  int N, GCD, LCM, a = 1;
    cin >> N;
    LCM = 1;
    for (int number = 1; number <= N; number++)
    {
        a = number; // current number
        int b = LCM; // store LCM
        while (b != 0) { //find gcd by 'Euclid algorithm'
            int temp = b;
            b = a % b;
            a = temp;
        }
        LCM = (LCM * number) / a; // a is GCD here
    }
     cout << LCM;
    return 0;
}