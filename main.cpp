#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    int count=0;
    bool containZero=false;
    for(int i = 100; i < 1000; i++) {
        bool containZero=false;
        a = i / 100;
        b = (i % 100) / 10;
        c = i % 10;
        if(a == b || b == c){
            containZero=true;
        }else{
            count++;
        }
    }
    if(containZero==false){
        cout<<count<<endl;
    }
    // o(1)
    return 0;
}