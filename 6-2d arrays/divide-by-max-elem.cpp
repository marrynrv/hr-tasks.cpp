#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m,n;
    cin >> m >> n;
    int matrix[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    double maxElement = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
             if (abs(matrix[i][j]) > abs(maxElement)) {
                maxElement = matrix[i][j];
            }
        }
    }

    double copyMatrix[m][n];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            copyMatrix[i][j] = matrix[i][j] / maxElement;
            cout<<copyMatrix[i][j]<< " ";
        }
        cout<<endl;
    }
    return 0;
}
