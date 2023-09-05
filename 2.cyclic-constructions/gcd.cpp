#include <iostream>
using namespace std;


int main() {
    int a, b;
    cin >> a >> b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << a;
    return 0;
}
/* 
#include <iostream>

int main() {
    int num1, num2;

    // Input two numbers from the user
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int gcd = 1;

    // Find the prime factors and calculate GCD
    for (int i = 2; i <= std::min(num1, num2); ++i) {
        // Check if i is a common prime factor of both numbers
        while (num1 % i == 0 && num2 % i == 0) {
            gcd *= i;   // Multiply i to the GCD
            num1 /= i;  // Divide num1 by i
            num2 /= i;  // Divide num2 by i
        }
    }

    // Display the calculated GCD
    std::cout << gcd << std::endl;

    return 0;
} */