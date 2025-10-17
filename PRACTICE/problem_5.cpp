#include<iostream>
using namespace std;
class currency{
public:
    int r;
    int p;
    public:
    void get(int a,int b){
        r=a;
        p=b;
    }
    void display(){
        if(p<100){
            cout<<"currency: "<<r<<"."<<p<<endl;
        }
       else{
           int x=p/100;
           p=p%100;
           r=r+x;
           cout<<"currency: "<<r<<"."<<p<<endl;
       }
    }
    currency add1(currency &a){//with return statement
        currency b;
        b.r=r+a.r;
        b.p=p+a.p;
        return b;
    }
    void add2(currency &a,currency &b){//without return statement
        r=a.r+b.r;
        p=a.p+b.p;
    }
};
int main(){
    currency a,b,c,d;
    a.get(12,70);
    a.display();
    b.get(13,85);
    b.display();

    c=a.add1(b);
    c.display();

    d.add2(a,b);
    d.display();
}