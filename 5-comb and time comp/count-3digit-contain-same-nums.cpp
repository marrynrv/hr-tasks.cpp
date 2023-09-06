#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    int count=0;
    bool containIdNums=false;
    for(int i = 100; i < 1000; i++) {
        bool containIdNums=false;
        a = i / 100;
        b = (i % 100) / 10;
        c = i % 10;
        if(a == b || b == c){
            containIdNums=true;
        }else{
            count++;
        }
    }
    if(containIdNums==false){
        cout<<count<<endl;
    }
    // o(1)
    return 0;
}