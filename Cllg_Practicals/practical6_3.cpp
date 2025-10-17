#include <iostream>
using namespace std;

void mergeSortedArrays(int* a, int sizeA, int* b, int sizeB, int*& result, int& resultSize) {
    resultSize = sizeA + sizeB;
    result = new int[resultSize];
    int i = 0, j = 0, k = 0;

    while (i < sizeA && j < sizeB) {
        if (a[i] < b[j]) {
            result[k++] = a[i++];
        } else {
            result[k++] = b[j++];
        }
    }

    while (i < sizeA) {
        result[k++] = a[i++];
    }

    while (j < sizeB) {
        result[k++] = b[j++];
    }
}

int main() {
    int sizeA, sizeB;

    cout << "Enter the size of the first sorted array: ";
    cin >> sizeA;
    int* a = new int[sizeA];
    cout << "Enter " << sizeA << " sorted elements for the first array:" << endl;
    for (int i = 0; i < sizeA; i++) {
        cin >> a[i];
    }

    cout << "Enter the size of the second sorted array: ";
    cin >> sizeB;
    int* b = new int[sizeB];
    cout << "Enter " << sizeB << " sorted elements for the second array:" << endl;
    for (int i = 0; i < sizeB; i++) {
        cin >> b[i];
    }

    int* mergedArray;
    int mergedSize;
    mergeSortedArrays(a, sizeA, b, sizeB, mergedArray, mergedSize);

    cout << "Merged sorted array:" << endl;
    for (int i = 0; i < mergedSize; i++) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    delete[] a;
    delete[] b;
    delete[] mergedArray;

    return 0;
}
