#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){
        a=0;
    }
    number(int x){
        a=x;
    }
    //Copy Constructor
    //Note(IMP): When no copy constructor is found, compiler supplies its own copy constructor
    number(number &obj){
        cout<<"Copy Constructor called!!"<<endl;
        a=obj.a;
    }
    void display(){
        cout<<"The Value: "<<a<<endl;
    }
};
int main(){
    number x,y,z(45),z2;

    x.display();
    y.display();
    z.display();

    //z1 should exactly resemble z -> Copy Constructor
    number z1(z);//copy constructor invoked
    z1.display();

    z2=z;//copy constructor will not be invoked bcoz we have assigned z to an object which is already declared(line-23)
    z2.display();

    number z3=z;//copy constructor invoked
    z3.display();

    return 0;
}