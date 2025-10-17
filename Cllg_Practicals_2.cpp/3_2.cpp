#include <iostream>
using namespace std;
int recursiveSum(int arr[], int size) {
    if (size == 0) {
        return 0;
    }
    return arr[size - 1] + recursiveSum(arr, size - 1);
}
int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / 4;//to find the no. of elements of array
    cout << recursiveSum(numbers, size) << endl;
    return 0;
}
