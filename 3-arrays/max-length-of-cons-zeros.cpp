#include <iostream>
using namespace std;

int main() {
    int n, count = 0,max=0;
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            count = 0;
        }
        if (arr[i] == 0) { 
            count++;
            if(count>max){
                max = count;
            }
        }
        
    }
    cout << "Length of Maximum Consecutive Zeros: " << max;
    delete[] arr;  
    return 0;
}