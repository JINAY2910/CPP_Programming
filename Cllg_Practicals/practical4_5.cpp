#include <iostream>
#include <vector>
using namespace std;
class Student {
protected:
    string name;
    int marks;
public:
    Student(string name, int marks) : name(name), marks(marks) {}
    virtual void computeGrade() const = 0;
    virtual void display() const {
        cout << "Name: " << name << ", Marks: " << marks << " -> ";
    }
    virtual ~Student(){}
};
class Undergraduate : public Student {
public:
    Undergraduate(string name, int marks) : Student(name, marks) {}
    void computeGrade() const override {
        display();
        if (marks >= 90)
            cout << "Grade: A+" << endl;
        else if (marks >= 75)
            cout << "Grade: A" << endl;
        else if (marks >= 60)
            cout << "Grade: B" << endl;
        else if (marks >= 50)
            cout << "Grade: C" << endl;
        else
            cout << "Grade: F" << endl;
    }
};
class Postgraduate : public Student {
public:
    Postgraduate(string name, int marks) : Student(name, marks) {}
    void computeGrade() const override {
        display();
        if (marks >= 85)
            cout << "Grade: A+" << endl;
        else if (marks >= 70)
            cout << "Grade: A" << endl;
        else if (marks >= 60)
            cout << "Grade: B" << endl;
        else if (marks >= 50)
            cout << "Grade: C" << endl;
        else
            cout << "Grade: F" << endl;
    }
};
void addStudent(vector<Student*>& students) {
    int choice;
    string name;
    int marks;
    cout << "\n1. Add Undergraduate Student\n2. Add Postgraduate Student\nChoose: ";
    cin >> choice;
    cin.ignore();
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Marks: ";
    cin >> marks;
    if (choice == 1)
        students.push_back(new Undergraduate(name, marks));
    else if (choice == 2)
        students.push_back(new Postgraduate(name, marks));
    else
        cout << "Invalid choice!\n";
}
void showAllGrades(const vector<Student*>& students) {
    cout << "\nStudent Grades:\n";
    for (const auto& student : students) {
        student->computeGrade();
    }
}
void deleteAllStudents(vector<Student*>& students) {
    for (auto student : students) {
        delete student;
    }
    students.clear();
}
int main() {
    vector<Student*> students;
    int option;
    do {
        cout << "\n--- Advanced Grading System ---\n";
        cout << "1. Add Student\n2. Display All Grades\n3. Exit\nChoose option: ";
        cin >> option;

        switch (option) {
        case 1:
            addStudent(students);
            break;
        case 2:
            showAllGrades(students);
            break;
        case 3:
            deleteAllStudents(students);
            cout << "BYE BYE.....................\n";
            break;
        default:
            cout << "Invalid Option!\n";
        }
    } while (option != 3);
    return 0;
}
