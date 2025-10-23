#include <iostream>
#include <cmath>  // For pow()

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    std::cout << "\nResults from 1 to " << n << ":\n";

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            // Even number: print cube
            std::cout << "Even: " << i << "^3 = " << pow(i, 3) << std::endl;
        } else {
            // Odd number: print square
            std::cout << "Odd: " << i << "^2 = " << pow(i, 2) << std::endl;
        }
    }

    return 0;
}
