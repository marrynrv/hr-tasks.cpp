#include <iostream>

using namespace std;

int main() {
    int det[3][3];
    int ans =0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> det[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
         for (int j = 0; j < 3; j++) {
            int a = det[0][0] * (det[1][1] * det[2][2] - det[2][1]*det[1][2]);
            int b = det[0][1] * (det[1][0] * det[2][2] - det[1][2]*det[2][0]);
            int c = det[0][2] * (det[1][0] * det[2][1] - det[1][1]*det[2][0]);
            ans = a-b+c;
         }
    }

    cout<<ans;
    return 0;
}
