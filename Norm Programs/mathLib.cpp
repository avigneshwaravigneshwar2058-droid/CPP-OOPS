#include <iostream>
#include <cmath>    // Required for math functions

int main() {
    double number = 9.75;

    std::cout << "Original number: " << number << std::endl;

    // Truncates the decimal part
    std::cout << "trunc(" << number << ") = " << trunc(number) << std::endl;

    // Square root
    std::cout << "sqrt(" << number << ") = " << sqrt(number) << std::endl;

    // Power (number raised to 2)
    std::cout << "pow(" << number << ", 2) = " << pow(number, 2) << std::endl;

    // Floor (rounds down)
    std::cout << "floor(" << number << ") = " << floor(number) << std::endl;

    // Ceil (rounds up)
    std::cout << "ceil(" << number << ") = " << ceil(number) << std::endl;

    return 0;
}
