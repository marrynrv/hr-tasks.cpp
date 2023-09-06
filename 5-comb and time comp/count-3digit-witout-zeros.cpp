#include <iostream>
using namespace std;

int main() {
    int n,a,b,c;
    int count = 0;
    for(int n = 100; n <= 999; n++){
        a = n/100;
        b = (n % 100) / 10;
        c = n % 10;
        if(a != 0 && b != 0 && c != 0){
            count++;
        }
    }
    cout << count;
    //O(1)
    return 0;
}
