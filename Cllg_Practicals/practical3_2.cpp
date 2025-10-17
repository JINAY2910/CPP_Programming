#include <iostream>
#include <vector>
using namespace std;

int recursiveSum(const vector<int>& arr, int index) {
    if (index < 0) {
        return 0;
    }
    return arr[index] + recursiveSum(arr, index - 1);
}

int nonRecursiveSum(const vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int recSum = recursiveSum(arr, n - 1);
    cout << recSum << endl;
    int nonRecSum = nonRecursiveSum(arr);
    cout << nonRecSum << endl;
    return 0;
}
