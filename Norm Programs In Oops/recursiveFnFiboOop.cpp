#include <iostream>
using namespace std;

class Fibonacci {
private:
    int limit;  // upper limit (n)

    // Recursive function to calculate nth Fibonacci number
    int calculate(int term) {
        if (term == 0)
            return 0;
        else if (term == 1)
            return 1;
        else
            return calculate(term - 1) + calculate(term - 2);
    }

public:
    // Function to input the upper limit
    void getInput() {
        cout << "Enter the upper limit (n): ";
        cin >> limit;
    }

    // Function to display Fibonacci series up to 'limit'
    void displaySeries() {
        cout << "Fibonacci series from 1 to " << limit << ":\n";
        int i = 0, fib;

        while (true) {
            fib = calculate(i);
            if (fib > limit)
                break;
            if (fib >= 1)
                cout << fib << " ";
            i++;
        }
        cout << endl;
    }
};

int main() {
    Fibonacci series;
    series.getInput();
    series.displaySeries();

    return 0;
}

