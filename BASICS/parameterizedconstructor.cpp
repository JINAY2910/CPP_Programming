// This is example of parameterized constructor.
#include<iostream>
using namespace std;
class complex{
    int i,r;
    public:
    complex(int, int);// --> Declaration of constructor 
    void display(){
        cout<<"the complex no= "<<r<<" + "<<i<<"i"<<endl;
    }
};
complex::complex(int x,int y){
    r=x;
    i=y;
    //cout<<"Hello World"; --> This is valid
}
int main(){
    //Implicit Call
    complex o1(2,4);

    o1.display();

    //Explicit Call
    complex o2 = complex(5,7);
    
    o2.display();

    return 0;
}