#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ifstream file("data.txt"); 

    if (!file.is_open()) {
        cerr << "Error: Could not open the file.\n";
        return 1;
    }

    vector<string> lines;
    string line;
    int lineCount = 0, wordCount = 0, charCount = 0;

    while (getline(file, line)) {
        lines.push_back(line);        
        lineCount++;                  
        charCount += line.length();   

        stringstream ss(line);
        string word;
        while (ss >> word) {
            wordCount++;            
        }
    }

    file.close();

    cout << "Total Lines     : " << lineCount << endl;
    cout << "Total Words     : " << wordCount << endl;
    cout << "Total Characters: " << charCount << endl;

    return 0;
}


