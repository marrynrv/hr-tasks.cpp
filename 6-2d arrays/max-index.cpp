#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n,m;
    int j,i;
    cin>>n>>m;
    int matrix[n][m];
    for( i = 0; i < n; i++ ){
        for( j = 0; j < m; j++){
            cin>>matrix[i][j];
        }
    }
    int max_value = 0;
    int col_j = 0;
    int row_i = 0;
    for( i = 0; i < n; i++){
        for( j = 0; j < m; j++){
            int current_value = matrix[i][j];
            if(current_value > max_value){
                max_value = current_value;
                col_j = j;
                row_i = i;
            }
        }
    }
    cout<<col_j+1<<" "<<row_i+1<<" "<<max_value<<endl;
    return 0;
}
