#include <iostream>
using namespace std;

int main(){
    int n,m;
    int i,j;
    cin>>n>>m;
    int matrix[n][m];
    for( i = 0; i < n; i++ ){
        for( j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }
    int max_value = 0;
    int row_i = -1;
    int col_j = -1;

    for( i = 0; i < n; i++){
        for( j = 0; j < m; j++){

            int current_value = matrix[i][j];
            if(current_value > max_value){
                max_value = current_value;
                row_i = i;
                col_j = j;
            }
        }
    }
    cout << "Max value: " << max_value << endl;
    cout << "In row: " << row_i + 1 << endl;
    cout << "In column: " << col_j + 1 << endl;
    return 0;
}