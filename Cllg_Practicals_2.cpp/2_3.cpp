#include<iostream>
using namespace std;
class Bank{
    string name;
    int accno;
    int balance;
    public:
    Bank(){
        balance=0;
    }
    Bank(string a,int b,int c){
        name=a;
        accno=b;
        balance=c;
    }
    int deposit(int deposit){
        balance += deposit;
        return balance;
    }
    int withdraw(int withdraw){
        if(balance>= withdraw)balance -= withdraw;
        else cout<<"You are Gareeb(WD NP)"<<endl;
        return balance;
    }
    void display(){
        cout<<endl<<"Bank Details"<<endl;
        cout<<"Account Holder: "<<name<<endl;
        cout<<"Account number: "<<accno<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main(){
    Bank B("jinay",4545,500);
    B.deposit(100);
    B.withdraw(1000);
    B.display();
}