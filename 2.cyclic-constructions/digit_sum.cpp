#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,sum=0;
  cin>>n;
  while(n!=0){
    sum = sum + n%10;
    n = n/10;
  }
  cout<<sum<<endl;
    return 0;
}