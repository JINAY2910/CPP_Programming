#include<iostream>
using namespace std;
class complex{
    int i,r;
    public:
    void setdata(int a,int b){
        r=a;
        i=b;
    }
    void sum(complex c1,complex c2){
        r = c1.r + c2.r;
        i = c1.i + c2.i;
    }
    void display(){
        cout<<"the complex no= "<<r<<" + "<<i<<"i"<<endl;
    }
};
int main(){
    complex o1,o2,o3;
    o1.setdata(1,2);
    o1.display();
    o2.setdata(3,4);
    o2.display();
    o3.sum(o1,o2);
    o3.display();
    return 0;
}