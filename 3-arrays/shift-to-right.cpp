#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int lastElement = arr[n-1];

    for(int i = n - 1; i > 0; i--){
        arr[i]=arr[i-1];
    }
    arr[0] = lastElement;
    
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}