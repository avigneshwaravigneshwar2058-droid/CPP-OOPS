#include <iostream>
#include <cctype>  // For isdigit(), isalpha(), isspace()
using namespace std;

class StringAnalyzer {
private:
    string str;
    int digitCount;
    int specialCharCount;

public:
    // Constructor
    StringAnalyzer() {
        digitCount = 0;
        specialCharCount = 0;
    }

    // Function to get input
    void getInput() {
        cout << "Enter a string: ";
        getline(cin, str);
    }

    // Function to analyze the string
    void analyze() {
        for (char ch : str) {
            if (isdigit(ch)) {
                digitCount++;
            }
            else if (!isalpha(ch) && !isspace(ch) && !isdigit(ch)) {
                specialCharCount++;
            }
        }
    }

    // Function to display results
    void displayResult() const {
        cout << "\nDigit count: " << digitCount << endl;
        cout << "Special character count: " << specialCharCount << endl;
    }
};

int main() {
    StringAnalyzer analyzer;
    analyzer.getInput();
    analyzer.analyze();
    analyzer.displayResult();

    return 0;
}

