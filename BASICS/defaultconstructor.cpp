// This is example of default constructor.
#include<iostream>
using namespace std;
class complex{
    int i,r;
    public:
    complex(void);// --> Declaration of constructor 
    void display(){
        cout<<"the complex no= "<<r<<" + "<<i<<"i"<<endl;
    }
};
complex::complex(void){
    i=10;
    r=20;
    //cout<<"Hello World"; --> This is valid
}
int main(){
    complex o1;
    o1.display();
    return 0;
}