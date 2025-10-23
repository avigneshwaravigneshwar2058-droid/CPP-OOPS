#include <iostream>
using namespace std;

class Sorter {
private:
    int arr[100];   // maximum 100 elements
    int n;          // number of elements
    char order;     // 'A' for ascending, 'D' for descending

public:
    // Function to input numbers
    void getInput() {
        cout << "Enter the number of elements: ";
        cin >> n;

        cout << "Enter " << n << " numbers:\n";
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        cout << "Sort in ascending (A) or descending (D) order? ";
        cin >> order;
    }

    // Function to perform bubble sort
    void sortArray() {
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if ((order == 'A' || order == 'a') && arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                } else if ((order == 'D' || order == 'd') && arr[j] < arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }

    // Function to display sorted array
    void displayArray() const {
        cout << "Sorted numbers:\n";
        for (int i = 0; i < n; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Sorter sorter;
    sorter.getInput();
    sorter.sortArray();
    sorter.displayArray();

    return 0;
}

