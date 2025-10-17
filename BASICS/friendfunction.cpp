#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    void setdata(int n1, int n2){
        a=n1;
        b=n2;
    }
    void display(){
        cout<<"Your Number: "<<a<<" + i"<<b<<endl;
    }
    friend complex sumofcomplex(complex o1, complex o2);
};
complex sumofcomplex(complex o1, complex o2){
    complex o3;
    o3.setdata((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main(){
    complex o1,o2,sum;
    o1.setdata(4,3);
    o1.display();

    o2.setdata(1,3);
    o2.display();

    sum = sumofcomplex(o1,o2);
    sum.display();
    return 0;
}