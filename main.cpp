/* #include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int copyNum;
    int count=0;
    cin>>n;
    for(int i = pow(10, n-1); i < pow(10, n); i++){
        copyNum = i;
        bool idNums = false;
        int lastDigit = copyNum % 10;
        copyNum /= 10;

        while(copyNum > 0){
            int digit = copyNum % 10; 

            if(digit == lastDigit){
                bool idNums = true;
                break;
            }
            lastDigit = digit;
            copyNum /= 10;
        }
        if(idNums == false){
            count++;
        }
    }
    cout<<count;
    return 0;
} */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;

    for (int i = pow(10, n - 1); i < pow(10, n); i++) {
        int copyNum = i;
        bool isIdNums = false;
        int lastDigit = copyNum % 10;
        copyNum /= 10;

        while (copyNum > 0) {
            int digit = copyNum % 10;

            if (digit == lastDigit) {
                isIdNums = true;
                break;
            }
            lastDigit = digit;
            copyNum /= 10;
        }
        if (isIdNums == false) {
            count++;
        }
    }
    cout << count;

    return 0;
}