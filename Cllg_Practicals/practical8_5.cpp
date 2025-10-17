#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
    map<string, vector<string>> directory;
    int choice;

    while (true) {
        cout << "\n1. Create Folder\n";
        cout << "2. Add File to Folder\n";
        cout << "3. Display Directory Structure\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            string folderName;
            cout << "Enter folder name: ";
            getline(cin, folderName);
            if (directory.find(folderName) == directory.end()) {
                directory[folderName] = vector<string>();
                cout << "Folder created.\n";
            } else {
                cout << "Folder already exists.\n";
            }
        } else if (choice == 2) {
            string folderName, fileName;
            cout << "Enter folder name: ";
            getline(cin, folderName);
            if (directory.find(folderName) != directory.end()) {
                cout << "Enter file name: ";
                getline(cin, fileName);
                directory[folderName].push_back(fileName);
                cout << "File added to folder.\n";
            } else {
                cout << "Folder not found.\n";
            }
        } else if (choice == 3) {
            cout << "\nDirectory Structure:\n";
            for (auto it = directory.begin(); it != directory.end(); ++it) {
                cout << "Folder: " << it->first << endl;
                for (auto fileIt = it->second.begin(); fileIt != it->second.end(); ++fileIt) {
                    cout << "  - " << *fileIt << endl;
                }
            }
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
