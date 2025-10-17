#include <iostream>
using namespace std;
class DynamicArray {
private:
    int* arr;
    int size;
    int capacity;
    void resize(){
        int newCapacity = capacity * 2;
        int* newArr = new int[newCapacity];
        for (int i = 0; i < size; i++)
            newArr[i] = arr[i];
        delete[] arr;
        arr = newArr;
        capacity = newCapacity;
    }
public:
    DynamicArray(){
        capacity = 2;
        size = 0;
        arr = new int[capacity];
    }
    ~DynamicArray() {
        delete[] arr;
    }
    void insert(int value){
        if (size == capacity)
            resize();
        arr[size] = value;
        size++;
    }
    void deleteAt(int index){
        if (index < 0 || index >= size) {
            cout << "Invalid index" << endl;
            return;
        }
        for (int i = index; i < size - 1; i++)
            arr[i] = arr[i + 1];
        size--;
    }
    void print() const{
        cout << "Your Array is: ";
        for (int i = 0; i < size; i++)
            cout << arr[i] << ", ";
        cout << endl;
    }
};
int main() {
    DynamicArray arr;
    arr.insert(10);
    arr.insert(20);
    arr.insert(30);
    arr.print();
    arr.deleteAt(1);
    arr.print();
    arr.insert(40);
    arr.insert(50);
    arr.print();
    return 143;
}