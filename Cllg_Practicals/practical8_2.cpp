#include <iostream>
#include <map>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a sentence: ";
    getline(cin, input);

    map<string, int> wordFrequency;
    stringstream ss(input);
    string word;

    while (ss >> word) {
        wordFrequency[word]++;
    }

    cout << "\nWord Frequency Distribution:\n";
    for (auto it = wordFrequency.begin(); it != wordFrequency.end(); ++it) {
        cout << it->first << ": " << it->second << endl;
    }

    return 0;
}
