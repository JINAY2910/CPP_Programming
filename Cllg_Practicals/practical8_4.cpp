#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool compareByScoreDescending(const pair<string, int>& a, const pair<string, int>& b) {
    return a.second > b.second;
}

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    vector<pair<string, int>> students;
    cout << "Enter name and score of each student:\n";
    for (int i = 0; i < n; ++i) {
        string name;
        int score;
        cin >> name >> score;
        students.push_back(make_pair(name, score));
    }
    sort(students.begin(), students.end(), compareByScoreDescending);
    cout << "\nRanked Student List:\n";
    int rank = 1;
    for (auto it = students.begin(); it != students.end(); ++it) {
        cout << "Rank " << rank << ": " << it->first << " - " << it->second << endl;
        ++rank;
    }
    return 0;
}
