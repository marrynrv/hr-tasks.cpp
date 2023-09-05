#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int arr[5] = { 10, 20, 30, 40, 50 };
    int* ptr = arr;
    for (int i = 4; i >= 0; i--) {
        cout <<*(ptr+i)<< endl;
    }
    return 0;
}

/* #include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int arr[5] = { 10, 20, 30, 40, 50 };
    int* ptr;
    ptr = arr;
    for (int i = 4; i >= 0; i--) {
        cout <<ptr[i] << endl;
    }
    return 0;
} */