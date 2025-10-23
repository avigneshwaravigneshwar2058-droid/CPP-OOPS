#include <iostream>

int main() {
    // Equation: x^2 - 5x + 6 = 0
    int x;
    bool found = false;

    std::cout << "Finding at least one root of the equation x^2 - 5x + 6 = 0\n";

    // Try values of x from -100 to 100 (or any reasonable range)
    for (x = -100; x <= 100; ++x) {
        int result = x * x - 5 * x + 6;

        if (result == 0) {
            std::cout << "One root found: x = " << x << std::endl;
            found = true;
            break;  // stop after finding the first root
        }
    }

    if (!found) {
        std::cout << "No integer root found in the range.\n";
    }

    return 0;
}
