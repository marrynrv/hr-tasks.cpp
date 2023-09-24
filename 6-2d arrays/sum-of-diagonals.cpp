#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m,n;
    int sumOfMain = 0;
    int sumOfSecondary = 0;
    cin >> m >> n;
    int matrix[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(j==i){
                sumOfMain += matrix[i][j];
            }
            if(j==n-i-1){
                sumOfSecondary += matrix[i][j];
            }
        }
    }

    cout<<sumOfMain+sumOfSecondary;
    return 0;
}