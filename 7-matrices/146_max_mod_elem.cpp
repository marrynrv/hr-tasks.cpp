#include <iostream>
using namespace std;

int main() {
    int n, m;
    int maxValue=0, xVal, yVal;
    cin >> n >> m;
    int** matrix = new int* [n];

    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[m];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] >= maxValue) {
                maxValue = matrix[i][j];
                xVal = i;
                yVal = j;
            }
        }
    }
    cout <<"Value: "<< maxValue << " " << xVal << " " << yVal;
    return 0;
}