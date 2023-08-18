#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
/* int n,result;
cin>>n;
result=0;
 for(;n!=0;n/=10){
  if(n%10 > result){
    result = n%10;
  }
 }
 cout<<result<<endl;
 */
/*  int n,smallest=0, largest=0;
  cin>>n;
  while(n > 0){
     int r = n % 10;
     largest = max(r,largest);
     smallest = min(r,smallest);
     n = n/10;
  }
  cout<<largest;   */
int n,result;
cin>>n;
result=0;
while(n!=0){
  if(n%10 > result){
    result = n%10;
  }
  n /=10;
 }
 cout<<result<<endl;

  return 0;
}
