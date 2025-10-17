#include <iostream>
using namespace std;

class Item {
    int itemID;
    string itemName;
    float price;
    int quantity;

public:
    Item() {
        itemID = 0;
        itemName = "";
        price = 0;
        quantity = 0;
    }

    Item(int id, string name, float pr, int qty) {
        itemID = id;
        itemName = name;
        price = pr;
        quantity = qty;
    }

    void addStock(int qty) {
        quantity += qty;
    }

    void sellItem(int qty) {
        if (quantity >= qty) {
            quantity -= qty;
        } else {
            cout << "Insufficient stock for item: " << itemName << endl;
        }
    }

    void displayItem() {
        cout << "ID: " << itemID << ", Name: " << itemName
             << ", Price: " << price << ", Quantity: " << quantity << endl;
    }
};

int main() {
    Item items[3] = {
        Item(101, "Pen", 5.0, 50),
        Item(102, "Notebook", 25.0, 30),
        Item(103, "Eraser", 2.0, 100)
    };

    items[0].addStock(20);
    items[1].sellItem(10);
    items[2].sellItem(120);

    for (int i = 0; i < 3; i++) {
        items[i].displayItem();
    }

    return 0;
}
