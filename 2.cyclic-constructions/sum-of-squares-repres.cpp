#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 1; i * i <= N; ++i) {
        for (int j = i + 1; j * j <= N; ++j) {
            int sumOfSquare = i * i + j * j;
            if (sumOfSquare <= N) {
                cout << i << "^2 + " << j << "^2 = " << sumOfSquare << endl;
            }
        }
    }

    return 0;
}

/* 
int a=1;
int b= a+1;
for(a=1;a*a<=N-b*b;a++) {
    for(b = a+1;b*b<=N;++b){

    }
    b = a+1;
} */