#include <iostream>
using namespace std;

int main() {
    int N;
    int a = 1;
    int b = a + 1;
    cin >> N;
    
    for (int a = 1; a * a <= N - b * b; ++a) {
        for (int b = a + 1; b * b <= N - a * a; ++b) {
            int square = a * a + b * b;
            if (square == N) {
                cout << "Yes" << endl;
                return 0; 
            }
        }
        b = a + 1;
    }
    
    cout << "No" << endl; 
    return 0;
}
