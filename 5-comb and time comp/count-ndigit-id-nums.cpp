#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int copyNum;
    int count = 0;
    cin >> n;
    for (int i = pow(10, n - 1); i < pow(10, n) - 1; i++) {
       copyNum = i;
       if(copyNum % 5 == 0){
            count++;
        }
    }
    cout << count;
    return 0;
}