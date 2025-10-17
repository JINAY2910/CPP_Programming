#include <iostream>
using namespace std;

class Employee {
    string name;
    float basicSalary;
    float bonus;

public:
    Employee(string n, float bs, float b = 500) {
        name = n;
        basicSalary = bs;
        bonus = b;
    }

    float calculateTotalSalary() {
        return basicSalary + bonus;
    }

    void display() {
        cout << "Name: " << name << ", Total Salary: " << calculateTotalSalary() << endl;
    }
};

int main() {
    Employee e1("Jinay", 4000);
    Employee e2("Arth", 5000, 800);
    Employee e3("Mantra", 3000);
    Employee e4("Jash", 4500, 1000);

    e1.display();
    e2.display();
    e3.display();
    e4.display();

    return 0;
}
