#include <iostream>
using namespace std;

class B;  // Forward declaration

class A {
    private:
        int data;
    public:
        A() {
		        this->data=1;
}
        // Declare class B as a friend
        friend class B;
};

class B {
    public:
        void showData(A a) {
            // Can access private member of A
            std::cout << "Data from class A: " << a.data << std::endl;
        }
};

int main()
{
	B b; 
	A a;
	b.showData(a);	
}
