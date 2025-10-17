#include <iostream>
#include <string>
#include <queue>
using namespace std;
class fuel_type {
    string f;
public:
    fuel_type() {}
    fuel_type(string y) : f(y) {}
    void display() { cout << f; }
};
class brand_name {
    string b;
public:
    brand_name() {}
    brand_name(string p) : b(p) {}
    void display1() { cout << b; }
};
class disp_car : public fuel_type, public brand_name {
public:
    disp_car() {}
    disp_car(string q, string c) : fuel_type(q), brand_name(c) {}
    void show() {
        cout << "Fuel Type: ";
        display();
        cout << "\nBrand Name: ";
        display1();
        cout << endl;
    }
};
int main() {
    queue<disp_car> carQueue;
    carQueue.push(disp_car("CNG", "BMW"));
    carQueue.push(disp_car("Petrol", "Punch"));
    carQueue.push(disp_car("Diesel", "Hyundai"));
    while (!carQueue.empty()) {
        carQueue.front().show();
        cout << "-----------------------------" << endl;
        carQueue.pop();
    }
    return 0;
}
