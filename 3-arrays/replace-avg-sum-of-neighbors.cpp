#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    double* arr = new double[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    double* modifiedArr = new double[n];
    modifiedArr[0] = arr[0];
    for (int i = 1; i < n - 1; i++) {
        modifiedArr[i] = (arr[i - 1] + arr[i + 1]) / 2.0;
    }
    modifiedArr[n - 1] = arr[n - 1];


    for (int i = 0; i < n; i++) {
     cout << modifiedArr[i] << " "; 
    }

    delete[] arr;
    delete[] modifiedArr;
    return 0;
}
