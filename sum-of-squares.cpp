#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    for (int i = 1; i * i <= N; ++i) {
        for (int j = i + 1; j * j <= N - i * i; ++j) {
            int square = i * i + j * j;
            if (square == N) {
                cout << "Yes" << endl;
                return 0; 
            }
        }
    }
    
    cout << "No" << endl; 
    return 0;
}
