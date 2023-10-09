#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int** matrix = new int* [n];

    for (int i = 0; i < n; ++i) {
        matrix[i] = new int[n];
    }

    cout << "Enter the elements of the matrix:" << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int upperSum = 0;
    for (int i = 0; i < n / 2; i++) {
        for (int j = i + 1; j < n - i - 1; j++) {
            upperSum += matrix[i][j];
        }
    }
   int downSum = 0;
    for (int i = n / 2; i < n; i++) {
        for (int j = n - i; j < i; j++) {
            downSum += matrix[i][j];
        }
    }

    int leftSum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (j < i) {
                leftSum += matrix[i][j];
            }
        }
    }


    cout << "Sum of the upper quarter: " << upperSum << endl;
    cout << "Sum of the down quarter: " << downSum << endl;
    cout << "Sum of the left quarter: " << leftSum << endl;
    
    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
    }

    delete[] matrix;

    return 0;
}
