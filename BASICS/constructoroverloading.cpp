// This is example of parameterized constructor.
#include<iostream>
using namespace std;
class complex{
    int i,r;
    public:
    complex(int, int);
    complex(int);
    complex();
    void display(){
        cout<<"the complex no= "<<r<<" + "<<i<<"i"<<endl;
    }
};
complex::complex(int x,int y){
    r=x;
    i=y;
}
complex::complex(int x){
    r=x;
    i=0;
}
complex::complex(void){
    r=5;
    i=4;
}
int main(){

    complex o1(2,4);
    o1.display();

    complex o2(5);
    o2.display();

    complex o3;
    o3.display();

    return 0;
}