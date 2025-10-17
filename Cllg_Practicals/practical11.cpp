#include<iostream>
#include<stack>
using namespace std;
class Bank {
protected:
    string name;
    int acc_no;
    int balance;
public:
    void get() {
        cout << "Enter the name of the account holder: ";
        cin >> name;
        cout << "Enter the account number: ";
        cin >> acc_no;
        cout << "Enter the balance: ";
        cin >> balance;
    }
    void display() {
        cout << endl;
        cout << "The name of the account holder: " << name << endl;
        cout << "The account number: " << acc_no << endl;
        cout << "The balance: " << balance << endl << endl;
    }
};
class Transactions : public Bank {
protected:
    stack<string> history;
public:
    void deposit() {
        int deposit;
        cout << "Enter the amount to deposit: ";
        cin >> deposit;
        balance += deposit;
        history.push("Deposited: " + to_string(deposit));
    }
    void withdraw() {
        int withdraw;
        cout << "Enter the amount to withdraw: ";
        cin >> withdraw;
        if (withdraw <= balance) {
            balance -= withdraw;
            history.push("Withdrawn: " + to_string(withdraw));
        } else {
            cout << endl << "You are Gareeb" << endl;
            history.push("Failed Withdrawal Attempt: " + to_string(withdraw));
        }
    }
};
class Stack : public Transactions {
public:
    void showHistory() {
        cout << "Transaction History: " << endl;
        while (!history.empty()) {
            cout << history.top() << endl;
            history.pop();
        }
        cout << endl;
    }
};
int main() {
    Stack uni[100];
    int n;
    cout << "Enter the number of accounts you want to create: ";
    cin >> n;
    cout << endl << endl;
    for (int i = 0; i < n; i++) {
        uni[i].get();
        uni[i].deposit();
        uni[i].withdraw();
        uni[i].display();
        uni[i].showHistory();
    }
    return 0;
}
