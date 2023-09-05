/* #include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
int main() {
    int n;
    cin >> n;
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result = lcm(result, i);
    }
    cout << result;
    return 0;
} */

/* #include <iostream>
using namespace std;

int main() {
    // Read the value of N from the user
    int n;
    cin >> n;

    // Initialize the result with 1, as it is the identity element for multiplication
    int result = 1;

    // Iterate through numbers from 1 to N
    for (int i = 1; i <= n; i++) {
        int a = result;  // Store the current LCM in 'a'
        int b = i;       // 'b' represents the current number in the iteration
        // Find the LCM of 'a' and 'b' iteratively
        while (a % b != 0) {
            a = a + result;  // Add the previous LCM to 'a'
        }

        result = a;  // Update the LCM to the calculated value
    }

    // Print the final calculated LCM of all integers from 1 to N
    cout << result << endl;

    return 0;
}
 */

#include <iostream>
using namespace std;

int main() {
  int N, GCD, LCM, a = 1;
    cin >> N;
    LCM = 1;
    for (int number = 1; number <= N; number++)
    {
        a = number; // current number
        int b = LCM; // store LCM
        while (b != 0) { //find gcd by 'Euclid algorithm'
            int temp = b;
            b = a % b;
            a = temp;
        }
        LCM = (LCM * number) / a; // a is GCD here
    }
     cout << LCM;
    return 0;
}