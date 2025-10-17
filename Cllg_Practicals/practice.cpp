#include<iostream>
#include<vector>
using namespace std;
class Bank
{
    int an;
    string name;
    float bal;
public:
    // void check_accounts(vector<Bank> q){
    // cout<<"Number of Accounts in Bank: "<q.size();
    //  }

        friend void transfer(Bank &,Bank & ,float  );
    Bank()
    {
        string s;
        cout<<"Enter Name of Account Holder ";
        cin>>s;
        name=s;

        int w;
        cout<<"Enter Account Number of Holder ";
        cin>>w;
        an=w;
        float y;
        cout<<"Enter Balance ";
        cin>>y;
        bal=y;


    }
    void Bank_details()
    {
        cout<<"Account Number: "<<an<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Account Balance: "<<bal<<endl;
    }
};
    void transfer(Bank &c1,Bank &c2,float amount)
    {
        if(c1.bal>=amount){

            c1.bal-=amount;
            c2.bal+=amount;
            cout<<"Balance transferred from "<<c1.name<<" to "<<c2.name<<"s Account"<<endl;
        }
        else cout<<"NOT ENOUGH MONEY"<<endl;

    }
int main()
{
    int n,x;
    cout<<"Enter number of accounts you want to create ";
    cin>>n;
   // vector<Bank> b1;
   Bank o1;

       // cout<<"Enter account from which you want to transfer ";
       // cin>>from;
       // cout<<"Enter account to which you want to transfer ";
       // cin>>to;
       // if(from>=0 and from<n and to>=0 and to<n and to!=from)//{
        //    b1[to].transfer(b1[from],200);
       //}
       // b1[from].Bank_details();
        //b1[to].Bank_details();
        transfer(o1,o1,100);


}