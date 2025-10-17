//A function is friend of two classes
#include<iostream>
using namespace std;
class Y;
class X{
    int a;
    public:
    void set(int x){
        a=x;
    }
    friend void add(X,Y);
};
class Y{
    int b;
    public:
    void set(int y){
        b=y;
    }
    friend void add(X,Y);
};
void add(X ox,Y oy){
    cout<<"The Sum is: "<<ox.a+oy.b<<endl;
}
int main(){
    X a;
    Y b;
    a.set(5);

    b.set(6);
    
    add(a,b);

    return 0;
}