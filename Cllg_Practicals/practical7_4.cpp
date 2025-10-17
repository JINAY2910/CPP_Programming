#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;


ostream& tableFormat(ostream& os) {
    os << left << setw(15);
    return os;
}

struct Student {
    string name;
    int marks;
    char grade;
};

void printHeader() {
    cout << tableFormat << "Name"
         << tableFormat << "Marks"
         << tableFormat << "Grade" << endl;
    cout << string(45, '-') << endl;
}

void stlApproach(const string& filename) {
    ifstream infile(filename);
    if (!infile) {
        cerr << "Error opening file: " << filename << endl;
        return;
    }

    vector<Student> students;
    Student s;
    while (infile >> s.name >> s.marks >> s.grade) {
        students.push_back(s);
    }

    cout << "\n--- STL Approach ---\n";
    printHeader();
    for (const auto& student : students) {
        cout << tableFormat << student.name
             << tableFormat << student.marks
             << tableFormat << student.grade << endl;
    }

    infile.close();
}
void nonStlApproach(const string& filename) {
    ifstream infile(filename);
    if (!infile) {
        cerr << "Error opening file: " << filename << endl;
        return;
    }

    cout << "\n--- Non-STL Approach ---\n";
    printHeader();
    string name;
    int marks;
    char grade;
    while (infile >> name >> marks >> grade) {
        cout << tableFormat << name
             << tableFormat << marks
             << tableFormat << grade << endl;
    }

    infile.close();
}

int main() {
    string filename = "students.txt";

    cout << "Generating formatted student report from file: " << filename << endl;

    stlApproach(filename);
    nonStlApproach(filename);

    return 0;
}
