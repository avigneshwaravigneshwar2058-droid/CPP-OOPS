#include <iostream>
using namespace std;

class Box {
private:
    int length, width;

public:
    // Constructor with parameters having the same names as members
    void setDimensions(int length, int width) {
        // Use 'this' pointer to refer to member variables
        this->length = length;
        this->width = width;
    }

    // Calculate area
    int area() {
        return length * width;
    }

    // Display dimensions
    void display() {
        cout << "Length = " << length << ", Width = " << width << endl;
    }

    // Function that returns current object by pointer
    Box* getPointer() {
        return this;
    }
};

int main() {
    Box b;

    b.setDimensions(10, 5);
    b.display();

    cout << "Area = " << b.area() << endl;

    // Using this pointer to get address of the object
    Box* ptr = b.getPointer();
    cout << "Address of object b: " << ptr << endl;

    return 0;
}

