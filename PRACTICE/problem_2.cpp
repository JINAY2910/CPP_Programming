#include<iostream>
using namespace std;
class person{
    public:
    int age;
    string name;
    person(){
        name="NA";
        age=0;
    }
    person(string n,int x){
        name=n;
        age=x;
    }
    void display1(){
        cout<<name<<endl;
        cout<<age<<endl;
    }
};
class employee: public person{
    public:
    int id;
    employee(){
        id=0;
    }
    employee(string n,int a,int i):person(n,a){
        id=i;
    }
    void display2(){
        cout<<id<<endl;
    }
};
class manager : public employee{
    public:
    string dept;
    manager(){
        dept="NA";
    }
    manager(string n,int a,int id,string d):employee(n,a,id){
        dept=d;
    }
    void display3(){
        cout<<dept<<endl;
    }
};
int main(){
    manager m("jinay",18,1234,"IT");
    m.display1();
    m.display2();
    m.display3();
}