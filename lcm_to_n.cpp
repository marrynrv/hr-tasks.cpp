#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
int main() {
    int n;
    cin >> n;
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result = lcm(result, i);
    }
    cout << result;
    return 0;
}