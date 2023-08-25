#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n; 

    int* arr = new int[n]; 
    int i;

    for (i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int p = arr[1] / arr[0]; 

    for (i = 2; i < n; ++i) {
        if (arr[i-1] * p != arr[i]) {
            cout << "No"; 
            delete[] arr;
            return 0;
        }
    }

    cout << "Yes"; 
    delete[] arr; 
    return 0;
}

