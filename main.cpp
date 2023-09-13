#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Define a 2D array (matrix)
    int matrix[3][3] = {
        {1, -2, 3},
        {4, 5, -6},
        {-7, 8, -9}
    };

    int max_value = 0;
    int max_row = -1;
    int max_col = -1;

    // Iterate through all elements of the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int current_value = matrix[i][j]; // Calculate the absolute value of the element

            // If the current value is greater than the current maximum, update the maximum and indices
            if (current_value > max_value) {
                max_value = current_value;
                max_row = i;
                max_col = j;
            }
        }
    }

    // Print the result
    cout << "Maximum value: " << max_value << endl;
    cout << "Indices of the element: (row " << max_row + 1 << ", column " << max_col + 1 << ")" << endl;

    return 0;
}
