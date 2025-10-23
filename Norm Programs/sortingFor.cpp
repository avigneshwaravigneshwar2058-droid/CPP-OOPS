#include <iostream>

int main() {
    int n, i, j;
    char order;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[100];  // assuming maximum of 100 elements

    std::cout << "Enter " << n << " numbers:\n";
    for (i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Sort in ascending (A) or descending (D) order? ";
    std::cin >> order;

    // Sorting using simple bubble sort
    for (i = 0; i < n - 1; ++i) {
        for (j = 0; j < n - i - 1; ++j) {
            if ((order == 'A' || order == 'a') && arr[j] > arr[j + 1]) {
                // swap for ascending order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            } else if ((order == 'D' || order == 'd') && arr[j] < arr[j + 1]) {
                // swap for descending order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    std::cout << "Sorted numbers:\n";
    for (i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
    return 0;
}
