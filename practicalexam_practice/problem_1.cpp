#include <iostream>
using namespace std;
class Bank
{

    int balance;
    int accno;
    string name;

public:
    void initialize()
    {
        accno = 0;
        balance = 0;
        name = "NA";
    }
    int acc(){
        return accno;
    }
    void get()
    {
        cout << "Enter the acoount number: ";
        cin >> accno;
        cout << "Enter the name of the account holder: ";
        cin >> name;
        cout << "Enter the balance of the account: ";
        cin >> balance;
    }
    void display()
    {
        cout << "The bank details the give person are" << endl;
        cout << "Name of the account holder: " << name<<endl;
        cout << "Account number of the account holder is:  " << accno << endl;
        cout << "Balance of the account is: " << balance << endl;
    }
    void withdraw()
    {
        int amount;
        cout << "Enter the amount to withdraw: ";
        cin >> amount;
        if (balance >= amount)
        {
            balance = balance - amount;
            cout << "The New Balance: " << balance<<endl;
        }
        else
        {
            cout << "You are Gareeb"<<endl;
        }
    }
    void deposit()
    {
        int amount;
        cout << "Enter the amount to deposit: ";
        cin >> amount;
        balance = balance + amount;
        cout << "The New Balance: " << balance<<endl;
    }
};
int main()
{
    int a;
    cout << "Enter the no. of you want to create: ";
    cin >> a;
    Bank o[a];
    for (int i = 0; i < a; i++)
    {
        o[i].initialize();
        o[i].get();
    }
    
    while(true){
    int no;
    cout << "1.To display account details" << endl
         << "2.To deposit balacnce" << endl
         << "3.To withdraw balance" << endl
         << "4.TO EXIT" << endl;
    cout << "Enter your choice: ";
    cin >> no;
    if (no == 4)
    {   
        cout<<"Thanks for using the system";
        exit(0);
    }
    else{
        int n,found=0;
        cout<<"Enter the acc no: ";
        cin>>n;
        for(int i=0;i<a;i++){
            if(o[i].acc()==n){
                found=1;
                if(no==1) o[i].display();
                else if(no==2) o[i].deposit();
                else if(no==3) o[i].withdraw();
            }
        }
        if(found==0){
            cout<<"ACCOUNT NOT FOUND";
        }
    }
}
return 0;
}
