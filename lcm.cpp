/* #include <iostream>
using namespace std;


int main() {
    int a, b, mult;
    cin >> a >> b;
    mult = a*b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout <<(mult/a);
    return 0;
} */

#include <iostream>
using namespace std;


int main() {
    int a, b;
    cin >> a >> b;
    int p = max(a, b);
    for(int i = p; i <=a*b; i +=p){
        if ((i % a == 0) && (i % b == 0))
        {
            cout<<i;
            return 0;
        }
        
    }
    return 0;
}