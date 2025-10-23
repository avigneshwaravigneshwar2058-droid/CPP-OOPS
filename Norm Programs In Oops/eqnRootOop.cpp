#include <iostream>
using namespace std;

class EquationSolver {
private:
    bool found;  // To track if any root is found

public:
    // Constructor
    EquationSolver() {
        found = false;
    }

    // Function to find at least one integer root
    void findRoot() {
        cout << "Finding at least one root of the equation x^2 - 5x + 6 = 0\n";

        for (int x = -100; x <= 100; ++x) {
            int result = x * x - 5 * x + 6;  // Hardcoded equation

            if (result == 0) {
                cout << "One root found: x = " << x << endl;
                found = true;
                break; // Stop after finding the first root
            }
        }

        if (!found) {
            cout << "No integer root found in the range.\n";
        }
    }
};

int main() {
    EquationSolver solver;   // Create an object
    solver.findRoot();       // Call method

    return 0;
}

