#include <iostream>
#include <cmath>   // For trunc(), sqrt(), pow(), floor(), ceil()
using namespace std;

class MathOperations {
private:
    double number;

public:
    // Constructor to initialize the number
    MathOperations(double num) {
        number = num;
    }

    // Function to display all math operations
    void displayResults() {
        cout << "Original number: " << number << endl;
        cout << "trunc(" << number << ") = " << trunc(number) << endl;
        cout << "sqrt(" << number << ") = " << sqrt(number) << endl;
        cout << "pow(" << number << ", 2) = " << pow(number, 2) << endl;
        cout << "floor(" << number << ") = " << floor(number) << endl;
        cout << "ceil(" << number << ") = " << ceil(number) << endl;
    }
};

int main() {
    MathOperations math(9.75);   // Hardcoded number like in your program
    math.displayResults();

    return 0;
}

