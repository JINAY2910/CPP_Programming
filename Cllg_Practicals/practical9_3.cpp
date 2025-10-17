#include <iostream>
#include <string>
using namespace std;

class InsufficientFundsException {
public:
    string message;
    InsufficientFundsException(string msg) : message(msg) {}
};

class BankAccount {
private:
    double balance;
    string transactions[100];
    int logIndex;
public:
    BankAccount() {
        balance = 0;
        logIndex = 0;
    }

    void log(string message) {
        if (logIndex < 100) {
            transactions[logIndex++] = message;
        }
    }

    void deposit(double amount) {
        log("Called deposit");
        balance += amount;
        log("Deposited: " + to_string(amount));
    }

    void withdraw(double amount) {
        log("Called withdraw");
        if (amount > balance)
            throw InsufficientFundsException("Insufficient balance");
        balance -= amount;
        log("Withdrew: " + to_string(amount));
    }

    void printTransactions() {
        for (int i = 0; i < logIndex; i++) {
            cout << transactions[i] << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

void performWithdrawal(BankAccount &account, double amount) {
    cout << "Entering performWithdrawal" << endl;
    account.withdraw(amount);
    cout << "Exiting performWithdrawal" << endl;
}

int main() {
    BankAccount account;
    account.deposit(1000);
    try {
        performWithdrawal(account, 1500);
    } catch (InsufficientFundsException &e) {
        cout << "Exception caught: " << e.message << endl;
    }
    account.printTransactions();
    return 0;
}
