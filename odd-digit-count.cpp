#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,oddNum,i=0;
  cin>>n;
  while(n!=0){
    oddNum = n%10;
    n = n/10;
    if(oddNum%2==1){
      ++i;
    }
  }
  cout<<i<<endl;  
    return 0;
}