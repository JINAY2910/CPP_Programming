#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class CorruptedDataException {
public:
    string message;
    CorruptedDataException(string msg) : message(msg) {}
};

int main() {
    string filePath;
    ifstream file;
    while (true) {
        cout << "Enter file path: ";
        getline(cin, filePath);
        file.open(filePath);
        if (!file) {
            cout << "File not found. Try again." << endl;
            file.clear();
            continue;
        }
        break;
    }
    string line;
    while (getline(file, line)) {
        istringstream iss(line);
        double value;
        if (!(iss >> value)) {
            cout << "Corrupted data found. Non-numeric value encountered." << endl;
            throw CorruptedDataException("Invalid numeric data");
        }
        cout << "Read value: " << value << endl;
    }
    file.close();
    return 0;
}
