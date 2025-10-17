#include <iostream>
#include <string>
#include <map>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    void displayPerson() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : public Person {
protected:
    int employeeID;

public:
    Employee(string n, int a, int id) : Person(n, a) {
        employeeID = id;
    }

    void displayEmployee() const {
        displayPerson();
        cout << "Employee ID: " << employeeID << endl;
    }

    int getID() const {
        return employeeID;
    }
};

class Manager : public Employee {
    string department;

public:
    Manager(string n, int a, int id, string dept) : Employee(n, a, id) {
        department = dept;
    }

    void displayManager() const {
        displayEmployee();
        cout << "Department: " << department << endl;
    }
};

int main() {
    cout << "--- Using Static Array ---" << endl;
    Manager managersArray[2] = {
        Manager("Jinay", 35, 101, "Finance"),
        Manager("Arth", 40, 102, "HR")
    };

    for (int i = 0; i < 2; ++i) {
        managersArray[i].displayManager();
        cout << endl;
    }

    cout << "--- Using Map with Raw Pointers ---" << endl;
    map<int, Manager*> managerMap;
    managerMap[201] = new Manager("Mantra", 38, 201, "IT");
    managerMap[202] = new Manager("Jash", 45, 202, "Operations");

    for (auto& entry : managerMap) {
        cout << "Lookup by ID: " << entry.first << endl;
        entry.second->displayManager();
        cout << endl;
    }

    for (auto& entry : managerMap) {
        delete entry.second;
    }

    return 0;
}
