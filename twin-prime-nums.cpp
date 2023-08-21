#include <iostream>

int main() {
    int N;
    std::cin >> N;

    // Loop through each number starting from 3 up to N - 2
    for (int num = 3; num <= N - 2; ++num) {
        bool is_num_prime = true;
        bool is_next_prime = true;

        // Check if 'num' is prime
        if (num <= 1) {
            is_num_prime = false;
        } else {
            for (int i = 2; i * i <= num; ++i) {
                if (num % i == 0) {
                    is_num_prime = false;
                    break;
                }
            }
        }

        // Check if 'num + 2' is prime
        if (num + 2 <= N) {
            for (int i = 2; i * i <= num + 2; ++i) {
                if ((num + 2) % i == 0) {
                    is_next_prime = false;
                    break;
                }
            }
        } else {
            is_next_prime = false;
        }

        // Check if 'num' and 'num + 2' are twin primes
        if (is_num_prime && is_next_prime) {
            std::cout << "(" << num << ", " << num + 2 << ")\n";
        }
    }

    return 0;
}
