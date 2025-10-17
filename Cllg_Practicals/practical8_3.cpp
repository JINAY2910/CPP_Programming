#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of transaction IDs: ";
    cin >> n;

    set<int> transactionIDs;
    cout << "Enter the transaction IDs:\n";
    for (int i = 0; i < n; ++i) {
        int id;
        cin >> id;
        transactionIDs.insert(id);
    }

    cout << "\nUnique and Sorted Transaction IDs:\n";
    for (auto it = transactionIDs.begin(); it != transactionIDs.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
