#include <iostream>
#include <cmath>
using namespace std;

class NegativeNumberException {
public:
    string message;
    NegativeNumberException(string msg) : message(msg) {}
};

int main() {
    double num;
    cout << "Enter a number: ";
    cin >> num;
    try {
        if (num < 0)
            throw NegativeNumberException("Cannot calculate square root of a negative number");
        cout << "Square root: " << sqrt(num);
    } catch (NegativeNumberException &e) {
        cout << e.message;
    }
    return 0;
}
