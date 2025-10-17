#include <iostream>
using namespace std;

class Account {
    int accountNumber;
    string name;
    float balance;
    static int totalAccounts;

public:
    Account(int accNo, string accName, float bal) {
        accountNumber = accNo;
        name = accName;
        balance = bal;
        totalAccounts++;
    }

    friend void transferMoney(Account& from, Account& to, float amount);

    void display() {
        cout << "Account Number: " << accountNumber << ", Name: " << name << ", Balance: " << balance << endl;
    }

    static void displayTotalAccounts() {
        cout << "Total Accounts: " << totalAccounts << endl;
    }
};

int Account::totalAccounts = 0;

void transferMoney(Account& from, Account& to, float amount) {
    if (from.balance >= amount) {
        from.balance -= amount;
        to.balance += amount;
    } else {
        cout << "Insufficient balance in " << from.name << "'s account" << endl;
    }
}

int main() {
    Account a1(101, "Jinay", 5000);
    Account a2(102, "Arth", 3000);
    Account a3(103, "Jash", 7000);

    transferMoney(a1, a2, 1500);
    transferMoney(a3, a1, 2000);

    a1.display();
    a2.display();
    a3.display();

    Account::displayTotalAccounts();

    return 0;
}
