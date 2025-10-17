#include<iostream>
using namespace std;
class rectangle{
    int l,w;
    public:
    void set(int a,int b){
        l=a;
        w=b;
    }
    int area(){
        int a=l*w;
        return a;
    }
    int perimeter(){
        int p=2*(l+w);
        return p;
    }
};
int main(){
    rectangle o;
    o.set(3,4);
    cout<<o.area()<<endl;
    cout<<o.perimeter()<<endl;
}