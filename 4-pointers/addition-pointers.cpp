#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int num1, num2, sum;
    cin>>num1>>num2;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    sum = *ptr1 + *ptr2;
    cout<<"Sum of " <<*ptr1<<" and "<<*ptr2<<" is: "<<sum<<endl;
    return 0;
}
