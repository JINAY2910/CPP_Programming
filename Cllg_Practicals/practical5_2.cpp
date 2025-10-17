#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;
public:
    Complex() : real(0), imag(0) {}
    Complex(double r, double i) : real(r), imag(i) {}
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }
    friend istream& operator>>(istream& in, Complex& c) {
        cout << "Enter real part: ";
        in >> c.real;
        cout << "Enter imaginary part: ";
        in >> c.imag;
        return in;
    }
    friend ostream& operator<<(ostream& out, const Complex& c) {
        if (c.imag >= 0)
            out << c.real << " + " << c.imag << "i";
        else
            out << c.real << " - " << -c.imag << "i";
        return out;
    }
};
int main() {
    Complex c1, c2, sum, diff;
    cout << "Enter first complex number:\n";
    cin >> c1;
    cout << "Enter second complex number:\n";
    cin >> c2;
    sum = c1+c2;
    diff = c1-c2;
    cout << "\nSum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    return 0;
}

