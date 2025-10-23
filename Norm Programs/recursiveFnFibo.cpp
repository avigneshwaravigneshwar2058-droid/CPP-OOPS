#include <iostream>
using namespace std;

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int term) {
    if (term == 0)
        return 0;
    else if (term == 1)
        return 1;
    else
        return fibonacci(term - 1) + fibonacci(term - 2);
}

int main() {
    int n;
    cout << "Enter the upper limit (n): ";
    cin >> n;

    cout << "Fibonacci series from 1 to " << n << ":\n";

    int i = 0;
    int fib;

    // Keep generating Fibonacci numbers until the term exceeds n
    while (true) {
        fib = fibonacci(i);
        if (fib > n)
            break;
        if (fib >= 1)  // start from 1 (skip the 0)
            cout << fib << " ";
        i++;
    }

    cout << endl;
    return 0;
}
