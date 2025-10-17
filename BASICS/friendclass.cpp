#include<iostream>
using namespace std;
class complex;//forward declaration

class operation{
    public:
    complex sum(complex,complex);
    complex diff(complex,complex);
};

class complex{
    int r,i;
    public:
    void setdata(int a,int b){
        r=a;
        i=b;
    }
    void display(){
        cout<<r<<" + "<<i<<"i"<<endl;
    }
    //friend complex operation :: sum(complex o1,complex o2);
    friend class operation;
};
complex operation :: sum(complex o1,complex o2){
    complex o3;
    o3.setdata(o1.r+o2.r,o1.i+o2.i);
    return o3;
}
complex operation :: diff(complex o1,complex o2){
    complex o3;
    o3.setdata(o1.r-o2.r,o1.i-o2.i);
    return o3;
}
int main(){
    complex o1,o2,result;
    operation x;

    o1.setdata(4,3);
    o1.display();

    o2.setdata(2,1);
    o2.display();

    result = x.sum(o1,o2);
    result.display();

    result = x.diff(o1,o2);
    result.display();

    return 0;
}
