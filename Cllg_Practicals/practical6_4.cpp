#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor called" << endl;
    }

    virtual ~Base() {
        cout << "Base destructor called" << endl;
    }
};

class Derived : public Base {
private:
    int* data;

public:
    Derived() {
        data = new int[5];
        cout << "Derived constructor called and dynamic memory allocated" << endl;
    }

    ~Derived() {
        delete[] data;
        cout << "Derived destructor called and dynamic memory deallocated" << endl;
    }
};

int main() {
    Base* obj = new Derived();
    cout << "Object created using Base* pointing to Derived" << endl;
    delete obj;
    cout << "Object deleted using Base* pointer" << endl;

    return 0;
}
