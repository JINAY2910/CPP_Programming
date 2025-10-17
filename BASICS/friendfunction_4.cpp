//swapping using friend function
#include<iostream>
using namespace std;
class c2;
class c1{
    int a;
    public:
    void set(int x){
        a=x;
    }
    void display(){
        cout<<a<<endl;
    }
    friend void swap(c1 &oc1,c2 &oc2);
};
class c2{
    int b;
    public:
    void set(int x){
        b=x;
    }
    void display(){
        cout<<b<<endl;
    }
    friend void swap(c1 &oc1,c2 &oc2);
};
void swap(c1 &oc1,c2 &oc2){
    int temp=oc1.a;
    oc1.a=oc2.b;
    oc2.b=temp;
    cout<<oc1.a<<endl<<oc2.b;
}
int main(){
    c1 a;
    c2 b;
    a.set(5);
    a.display();

    b.set(6);
    b.display();

    swap(a,b);
    
    return 0;
}