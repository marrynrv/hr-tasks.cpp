#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n, reversed=0, copyN=0;
  cin>>n;
  copyN=n;
  while(n>0){
    reversed = reversed * 10 + (n%10);
    n /=10;
  }
  n = copyN;
  if(reversed == n){
    cout<<"YES"<<endl;
  }else if(reversed !=n){
    cout<<"NO"<<endl;
  }
    return 0;
}