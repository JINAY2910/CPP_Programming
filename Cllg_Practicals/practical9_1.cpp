#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter numerator: ";
    if (!(cin >> a)) {
        cout << "Invalid input";
        return 0;
    }
    cout << "Enter denominator: ";
    if (!(cin >> b)) {
        cout << "Invalid input";
        return 0;
    }
    if (b == 0) {
        cout << "Division by zero error";
        return 0;
    }
    cout << "Result: " << a / b;
    return 0;
}
