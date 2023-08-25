#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    int n;
    bool flag = true;
    int i;
    cin >> n;
    for (i = 1; i <= n; i++) {
        flag = false;
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = true;
                break;
            }
        }
    }
    if (flag == false) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}

