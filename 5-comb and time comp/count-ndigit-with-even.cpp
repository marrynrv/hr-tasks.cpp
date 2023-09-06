#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int copyNum;
    int count = 0;
    cin >> n;
    for (int i = pow(10, n - 1); i < pow(10, n) - 1; i++) {
        bool isContainEven = false;
       copyNum = i;
       while(copyNum != 0){
            int digit = copyNum % 10;
            if(digit % 2 == 0){
                isContainEven = true;
                break;
            }
            copyNum /= 10;
       }
       if(isContainEven){
        count++;
       }
    }
    cout<<count<<endl;
    //o(10^n)
    return 0;
}