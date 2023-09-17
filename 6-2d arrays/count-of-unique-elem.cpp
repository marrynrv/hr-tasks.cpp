#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int matrix[n][m];

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    int countUnique = 0;  // Variable to store the count of unique elements

    // Check for unique elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            bool isUnique = true;  // Assume the current element is unique initially
            // Iterate through previously processed elements to check for uniqueness
            for (int x = 0; x < i; x++) {
                for (int y = 0; y < m; y++) {
                    if (matrix[i][j] == matrix[x][y]) {
                        isUnique = false;  // If a match is found, it's not unique
                        break;
                    }
                }
                if (!isUnique) break;  // No need to continue checking if it's not unique
            }
            if (isUnique) countUnique++;  // If it's unique, increment the count
        }
    }

    cout << "Number of unique elements: " << countUnique << endl;

    return 0;
}
