#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Transaction {
    string type;
    double amount;
};

class BankAccount {
protected:
    int accountNumber;
    double balance;
    vector<Transaction> transactions;

public:
    BankAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }

    virtual void deposit(double amount) {
        balance += amount;
        transactions.push_back({"Deposit", amount});
    }

    virtual void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            transactions.push_back({"Withdraw", amount});
        } else {
            cout << "Insufficient funds!" << endl;
        }
    }

    void undo() {
        if (transactions.empty()) return;
        Transaction lastTransaction = transactions.back();
        if (lastTransaction.type == "Deposit") {
            balance -= lastTransaction.amount;
        } else if (lastTransaction.type == "Withdraw") {
            balance += lastTransaction.amount;
        }
        transactions.pop_back();
    }

    void displayBalance() const {
        cout << "Account Number: " << accountNumber << ", Balance: " << balance << endl;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(int accNum, double initialBalance, double rate) : BankAccount(accNum, initialBalance) {
        interestRate = rate;
    }

    void addInterest() {
        balance += balance * (interestRate / 100);
        transactions.push_back({"Interest", balance * (interestRate / 100)});
    }
};

class CurrentAccount : public BankAccount {
private:
    double overdraftLimit;

public:
    CurrentAccount(int accNum, double initialBalance, double limit) : BankAccount(accNum, initialBalance) {
        overdraftLimit = limit;
    }

    void withdraw(double amount) override {
        if (balance + overdraftLimit >= amount) {
            balance -= amount;
            transactions.push_back({"Withdraw", amount});
        } else {
            cout << "Overdraft limit exceeded!" << endl;
        }
    }
};

int main() {
    SavingsAccount savings(101, 1000.0, 5.0);
    CurrentAccount current(102, 500.0, 200.0);

    savings.deposit(500.0);
    savings.addInterest();
    savings.displayBalance();
    
    current.withdraw(600.0);
    current.deposit(200.0);
    current.displayBalance();

    savings.undo();
    savings.displayBalance();

    current.undo();
    current.displayBalance();

    return 0;
}
