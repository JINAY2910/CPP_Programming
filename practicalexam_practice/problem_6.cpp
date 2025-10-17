#include<iostream>
using namespace std;
class customer;
class manager{
    int id;
    string name1;
    public:
    void get(int a,string b){
        id=a;
        name1=b;
    }
    void put(){
        cout<<"The ID of the manager: "<<id;
        cout<<"The name of the manager: "<<name1;
    }
    void get_cust_data(customer c);
};
class customer{
    int cust_no;
    string name2;
    public:
    void get(int a,string b){
        cust_no=a;
        name2=b;
    }
    friend void manager:: get_cust_data(customer);
};
 void manager :: get_cust_data(customer c){
        cout<<"Data given by: "<<name1<<endl;
        cout<<"The No of the customer: "<<c.cust_no<<endl;
        cout<<"The name of the customer: "<<c.name2<<endl;
    }
int main()
{
    customer c1,c2;
    c1.get(1234,"Jinay");
    c2.get(12,"Jay");
    manager m1;
    m1.get(12345,"Jash");
    m1.get_cust_data(c1);
    m1.get_cust_data(c2);
  return 0;
}