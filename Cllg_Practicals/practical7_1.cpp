#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
string toLowerCase(const string& str) {
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

int main() {
    string paragraph, word;
    
    cout << "Enter a paragraph (end input with Ctrl+D on Unix or Ctrl+Z on Windows):" << endl;
    getline(cin, paragraph, '\0'); 
    paragraph = toLowerCase(paragraph);

    
    stringstream ss(paragraph);
    vector<string> words;
    
    while (ss >> word) {
        
        word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
        words.push_back(word);
    }

    map<string, int> frequency;
    for (const string& w : words) {
        if (!w.empty()) {
            frequency[w]++;
        }
    }

    cout << "\nWord Frequencies:\n";
    for (const auto& pair : frequency) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
