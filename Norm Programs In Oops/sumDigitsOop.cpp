#include <iostream>
using namespace std;

class DigitSum {
private:
    int num;  // The 5-digit number

public:
    // Function to take input
    void getInput() {
        cout << "Enter a 5-digit number: ";
        cin >> num;

        if (num < 10000 || num > 99999) {
            cout << "Invalid input! Please enter a 5-digit number." << endl;
            exit(1); // terminate the program early
        }
    }

    // Function to calculate sum of digits
    int calculateSum() const {
        int temp = num;
        int sum = 0;

        while (temp > 0) {
            int digit = temp % 10; // extract last digit
            sum += digit;
            temp /= 10; // remove last digit
        }

        return sum;
    }

    // Function to display the result
    void displayResult() const {
        cout << "Sum of digits: " << calculateSum() << endl;
    }
};

int main() {
    DigitSum obj;
    obj.getInput();
    obj.displayResult();

    return 0;
}

