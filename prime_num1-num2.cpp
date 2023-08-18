#include <bits/stdc++.h>
using namespace std;
 
int main()
{

    int num1, num2, i, j;
    bool flag = true;
    cin >> num1 >>num2;
    for (i = num1; i <= num2; i++) {
        flag = false;

        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = true;
                break;
            }
        }

        if (flag == false)
            cout << i << " ";
    }
 
    return 0;
}
 
