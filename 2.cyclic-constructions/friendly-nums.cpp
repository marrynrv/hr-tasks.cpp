#include <iostream>
#include <vector>
using namespace std;

int main() {
    int M, N;
    int n1; 
    
    cin >> M >> N;

    for (int n1 = M; n1 <= N; ++n1) {
        int n2 = 0;

        for (int d = 1; d <= n1/2; ++d) {
            if (n1 % d == 0) {
                n2 = n2 + d;
            }
        }
        int sum = 0;

        if (n2 > n1 && n2 <= N) {
            for (int d = 1; d <= n2/2; ++d) {
                if (n2 % d == 0) {
                    sum = sum + d;
                }
            }

        }
        if (sum == n1) {
            cout << "(" << n1 << ", " << n2 << ")" << endl; 
        }
    }
    return 0;
}
