#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;
ostream& currency(ostream& os) {
    os << "₹";
    return os;
}
struct Student {
    string name;
    int marks;
    double fees;
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    vector<Student> students;
    for (int i = 0; i < n; ++i) {
        Student s;
        cout << "\nEnter details for student " << (i + 1) << ":\n";
        cout << "Name: ";
        cin >> ws;  
        getline(cin, s.name);
        cout << "Marks: ";
        cin >> s.marks;
        cout << "Fees: ";
        cin >> s.fees;

        students.push_back(s);
    }
    cout << "\nFormatted Student Report:\n";
    cout << left << setw(15) << "Name"
         << setw(10) << "Marks"
         << setw(15) << "Fees" << endl;
    cout << string(40, '-') << endl;
    for (const auto& s : students) {
        cout << left << setfill('.') << setw(15) << s.name
             << setfill('.') << setw(10) << s.marks
             << currency << fixed << setprecision(2) << setfill('.') << setw(15) << s.fees << endl;

        cout << setfill(' '); 
    }

    return 0;
}

