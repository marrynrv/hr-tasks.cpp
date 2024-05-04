/* 
#include <iostream>

using namespace std;

int main() {
    int n, m;
    int count = 0;
    cin >> n >> m;
    int matrix[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }
    bool isUnique[n*m] = {false}; 

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int element = matrix[i][j];
            if(!isUnique[element]){
                isUnique[element] = true; // Mark the element as seen
                count++;
            }
        }
    }
    cout<<count;
    return 0;
} */

#include <iostream>

using namespace std;

int main() {
    int n, m;
    int count = 0;
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
    bool isUnique[n*m] = { false };

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int element = matrix[i][j];
            if (!isUnique[element]) {
                isUnique[element] = true; // Mark the element as seen
                count++;
            }
        }
    }
    cout << count;
    return 0;
}
