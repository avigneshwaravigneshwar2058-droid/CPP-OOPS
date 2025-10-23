#include <iostream>
#include <cmath>  // For pow()
using namespace std;

class NumberProcessor {
private:
    int n;  // Upper limit

public:
    // Function to take input
    void getInput() {
        cout << "Enter the value of n: ";
        cin >> n;
    }

    // Function to process and display results
    void displayResults() const {
        cout << "\nResults from 1 to " << n << ":\n";

        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 0) {
                // Even number: print cube
                cout << "Even: " << i << "^3 = " << pow(i, 3) << endl;
            } else {
                // Odd number: print square
                cout << "Odd: " << i << "^2 = " << pow(i, 2) << endl;
            }
        }
    }
};

int main() {
    NumberProcessor np;
    np.getInput();
    np.displayResults();

    return 0;
}

