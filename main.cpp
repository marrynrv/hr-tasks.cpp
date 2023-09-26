#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int matrix[n][n];
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    
    int upperSum = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (i < n / 2 && j < n / 2 && i != j) {
                upperSum += matrix[i][j];
            }
            // Handle the extra diagonal element when n is odd
            if (n % 2 == 1 && i == j && i < n / 2) {
                upperSum += matrix[i][j];
            }
        }
    }
    
    cout << upperSum << endl;
    return 0;
}
