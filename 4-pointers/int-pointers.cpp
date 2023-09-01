#include <iostream>

using namespace std;

int main() {
    
    int a,b;
    cin>>a>>b;
    int *ptrA = &a;
    int *ptrB = &b;
    cout<<"Value of ptrA: "<<*ptrA<<endl; 
    cout<<"Value of ptrB: "<<*ptrB<<endl; 
    return 0;
}