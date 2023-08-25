#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,result=0,count=0,max=0,copyN;
    cin>>n;
    copyN=n;
    for(;n!=0;n/=10){
        if(n%10>= result){
            result = n%10;
        }
    }  
    max=result;
    n=copyN;
    while(n!=0){
        if(n%10 == max){
            count++;
        }
        n /=10;
    }
    cout<<count;
    return 0;
}