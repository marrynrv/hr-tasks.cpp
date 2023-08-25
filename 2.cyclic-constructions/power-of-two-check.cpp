#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        if (pow(2, i) == n) {
            cout << "Yes";
            return 0;
        }
    } cout << "No";
    return 0;
}
