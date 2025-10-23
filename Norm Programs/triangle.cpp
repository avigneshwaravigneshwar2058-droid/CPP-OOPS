#include <iostream>
using namespace std;

int main() {
    char ch;
    int lines;

    cout << "Enter a character to print: ";
    cin >> ch;

    cout << "Enter number of lines: ";
    cin >> lines;

    cout << "\nPattern:\n";

    for (int i = 1; i <= lines; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}
