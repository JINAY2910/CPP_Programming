#include<iostream>
using namespace std;
class person{
    string name;
    int age;
    public:
    void get1(string name,int age){
        this->name=name;
        this->age=age;
    }
    void put1(){
        cout<<"The name: "<<name<<endl;
        cout<<"The age: "<<age<<endl;
    }
};
class employee:public person{
    int id;
    public:
    void get2(int id){
        this->id=id;
    }
    void put2(){
        cout<<"The Unique ID: "<<id<<endl;
    }
};
class manager: public employee{
    string dept;
    public:
     void get3(string dept){
        this->dept=dept;
    }
    void put3(){
        cout<<"The Department: "<<dept<<endl;
    }
};
int main()
{
    manager m;
    m.get1("Jinay",18);
    m.get2(70460);
    m.get3("IT");
    m.put1();
    m.put2();
    m.put3();
    return 0;
}