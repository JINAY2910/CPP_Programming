#include<iostream>
using namespace std;
class BankAccount{
    int accno;
    string name;
    int balance;
    static int total_accounts;
    public:
    void get(int a,string b,int c){
        accno=a;
        name=b;
        balance=c;
        total_accounts++;
    }
    void display(){
        cout<<endl<<endl<<"Displaying Account Details"<<endl<<endl;
        cout<<"ACCOUNT NO: "<<accno<<endl;
        cout<<"The name of the account holder: "<<name<<endl;
        cout<<"The balance of the person: "<<balance<<endl;
        cout<<"................................................";
    }
    static void putcount(){
        cout<<endl<<"the value of total_accounts: "<<total_accounts<<endl<<endl;
    }
    void transfer(BankAccount &o2,int amount){
        if(balance>=amount){
            cout<<"Transferring money from account_1 to account_2";
            balance-=amount;
            o2.balance+=amount;
        }     
        else{
            cout<<"You are Gareeb";
        }   
    }
    
};
int BankAccount :: total_accounts;
int main(){
    BankAccount o1,o2;
    o1.get(1234,"Jinay",5000);
    o1.display();

    o2.get(12345,"Vinay",10000);
    o2.display();

    BankAccount::putcount();

    o1.transfer(o2,2500);

    o1.display();
    o2.display();
    return 0;
}