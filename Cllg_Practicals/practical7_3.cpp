#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
struct Item {
    string name;
    int quantity;
    double price;
};
void addItem() {
    ofstream file("inventory.txt", ios::app);
    if (!file) {
        cout << "Error opening file!" << endl;
        return;
    }
    Item item;
    cout << "Enter item name: ";
    cin >> item.name;
    cout << "Enter quantity: ";
    cin >> item.quantity;
    cout << "Enter price: ";
    cin >> item.price;

    file << item.name << " " << item.quantity << " " << item.price << endl;
    file.close();
    cout << "Item added successfully!" << endl;
}
void viewItems_NonSTL() {
    ifstream file("inventory.txt");
    if (!file) {
        cout << "Error opening file!" << endl;
        return;
    }
    cout << "\nInventory List (Non-STL approach):" << endl;
    Item item;
    while (file >> item.name >> item.quantity >> item.price) {
        cout << "Name: " << item.name << ", Quantity: " << item.quantity << ", Price: " << item.price << endl;
    }
    file.close();
}

void searchItem_NonSTL() {
    ifstream file("inventory.txt");
    if (!file) {
        cout << "Error opening file!" << endl;
        return;
    }
    string searchName;
    cout << "Enter item name to search: ";
    cin >> searchName;
    Item item;
    bool found = false;
    while (file >> item.name >> item.quantity >> item.price) {
        if (item.name == searchName) {
            cout << "Item found - Name: " << item.name << ", Quantity: " << item.quantity << ", Price: " << item.price << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Item not found." << endl;
    file.close();
}

void viewItems_STL() {
    ifstream file("inventory.txt");
    if (!file) {
        cout << "Error opening file!" << endl;
        return;
    }
    vector<Item> items;
    Item item;
    while (file >> item.name >> item.quantity >> item.price) {
        items.push_back(item);
    }
    file.close();

    cout << "\nInventory List (STL approach):" << endl;
    for (const auto& it : items) {
        cout << "Name: " << it.name << ", Quantity: " << it.quantity << ", Price: " << it.price << endl;
    }
}

void searchItem_STL() {
    ifstream file("inventory.txt");
    if (!file) {
        cout << "Error opening file!" << endl;
        return;
    }
    vector<Item> items;
    Item item;
    while (file >> item.name >> item.quantity >> item.price) {
        items.push_back(item);
    }
    file.close();

    string searchName;
    cout << "Enter item name to search: ";
    cin >> searchName;
    bool found = false;
    for (const auto& it : items) {
        if (it.name == searchName) {
            cout << "Item found - Name: " << it.name << ", Quantity: " << it.quantity << ", Price: " << it.price << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Item not found." << endl;
}
int main() {
    int choice;
    do {
        cout << "\n--- Inventory Management System ---" << endl;
        cout << "1. Add Item" << endl;
        cout << "2. View All Items (Non-STL)" << endl;
        cout << "3. Search Item by Name (Non-STL)" << endl;
        cout << "4. View All Items (STL)" << endl;
        cout << "5. Search Item by Name (STL)" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addItem(); break;
            case 2: viewItems_NonSTL(); break;
            case 3: searchItem_NonSTL(); break;
            case 4: viewItems_STL(); break;
            case 5: searchItem_STL(); break;
            case 6: cout << "Exiting program." << endl; break;
            default: cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 6);

    return 0;
}


