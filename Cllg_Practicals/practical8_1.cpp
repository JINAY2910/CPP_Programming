#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;
void display(const vector<int>& v) {
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of integers: ";
    cin >> n;

    vector<int> vec(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
    }

    cout << "\nOriginal vector: ";
    display(vec);
    vector<int> vec_std_reverse = vec;
    reverse(vec_std_reverse.begin(), vec_std_reverse.end());

    cout << "Reversed using std::reverse(): ";
    display(vec_std_reverse);
    vector<int> vec_manual = vec;
    auto front = vec_manual.begin();
    auto back = vec_manual.end() - 1;

    while (front < back) {
        iter_swap(front, back);
        ++front;
        --back;
    }

    cout << "Reversed manually using iterators: ";
    display(vec_manual);

    return 0;
}
