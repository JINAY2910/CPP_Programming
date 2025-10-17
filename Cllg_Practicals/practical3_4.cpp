#include <iostream>
#include <vector>
using namespace std;

template <typename T>
T findMax(const vector<T>& vec) {
    T maxVal = vec[0];
    for (int i = 1; i < vec.size(); ++i) {
        if (vec[i] > maxVal)
            maxVal = vec[i];
    }
    return maxVal;
}

template <typename T>
void reverseVector(vector<T>& vec) {
    int n = vec.size();
    for (int i = 0; i < n / 2; ++i) {
        T temp = vec[i];
        vec[i] = vec[n - i - 1];
        vec[n - i - 1] = temp;
    }
}

template <typename T>
void displayVector(const vector<T>& vec) {
    for (int i = 0; i < vec.size(); ++i)
        cout << vec[i] << " ";
    cout << endl;
}

int main() {
    vector<int> intVec = {4, 7, 1, 9, 3};
    vector<double> doubleVec = {4.5, 7.2, 1.9, 9.8, 3.3};
    vector<char> charVec = {'a', 'z', 'b', 'm', 'e'};

    cout << "Original Int Vector: ";
    displayVector(intVec);
    cout << "Max: " << findMax(intVec) << endl;
    reverseVector(intVec);
    cout << "Reversed Int Vector: ";
    displayVector(intVec);

    cout << "Original Double Vector: ";
    displayVector(doubleVec);
    cout << "Max: " << findMax(doubleVec) << endl;
    reverseVector(doubleVec);
    cout << "Reversed Double Vector: ";
    displayVector(doubleVec);

    cout << "Original Char Vector: ";
    displayVector(charVec);
    cout << "Max: " << findMax(charVec) << endl;
    reverseVector(charVec);
    cout << "Reversed Char Vector: ";
    displayVector(charVec);

    return 0;
}
