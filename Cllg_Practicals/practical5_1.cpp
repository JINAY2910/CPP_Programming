#include <iostream>
using namespace std;
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    double add(double a, double b) {
        return a + b;
    }
    double add(int a, double b) {
        return a + b;
    }
};
int main() {
    Calculator calc;
    cout << "add(int, int): " << calc.add(5, 3) << endl;           
    cout << "add(double, double): " << calc.add(2.5, 3.7) << endl; 
    cout << "add(int, double): " << calc.add(4, 2.5) << endl;      
    return 0;
}
