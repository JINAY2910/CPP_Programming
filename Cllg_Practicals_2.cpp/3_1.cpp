#include<iostream>
using namespace std;
class Employee{
    string name;
    int basicsalary;
    int bonus;
    public:
    Employee(){
        bonus=500;
    }
    Employee(string a,int b,int c){
        name=a;
        basicsalary=b;
        bonus=c;
    }
    inline int totalsalary(){
        int ts=basicsalary+bonus;
        return ts;
    }
};
int main(){
    
    string name;
    int bs,bonus;
    cout<<"Enter the name of the Employee:";
    cin>>name;
    cout<<"Enter the basic salary of the Employee:";
    cin>>bs;
    cout<<"Enter the bonus of the Employee:";
    cin>>bonus;
    Employee e(name,bs,bonus);
    cout<<endl<<"Total Salary: "<<e.totalsalary()<<endl;
    return 0;
}