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

    for (int i = 0; i < n / 2; i++) {
        for (int j = i + 1; j < n - i - 1; j++) {
            swap(matrix[i][j], matrix[n - i - 1][j]);
            swap(matrix[j][i], matrix[j][n - i - 1]);
        }
    }

    cout<<"\n================================"<<endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
