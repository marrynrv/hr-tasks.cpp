#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, result=0, count=0, max=0, copyN;
    cin >> n;
    copyN = n; // Copying N because after first while it will be 0.
    while(n != 0){
        if(n % 10 >= result){  // Checking if remainder will be more than previous.
            result = n % 10;
        }
        n /= 10;
    }  
    max = result;  // Copying result to maximum.
    n = copyN;     // Return previous meaning of N. 
    while(n != 0){
        if(n % 10 == max){  // Find the maximum 
            count++;       // Increment count
        }
        n /= 10;
    }
    cout << count;
    return 0;
}