#include <iostream>
using namespace std;

class PatternPrinter {
private:
    char ch;      // Character to print
    int lines;    // Number of lines

public:
    // Function to take input
    void getInput() {
        cout << "Enter a character to print: ";
        cin >> ch;

        cout << "Enter number of lines: ";
        cin >> lines;
    }

    // Function to print the pattern
    void printPattern() const {
        cout << "\nPattern:\n";
        for (int i = 1; i <= lines; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << ch << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    PatternPrinter printer;
    printer.getInput();
    printer.printPattern();

    return 0;
}

