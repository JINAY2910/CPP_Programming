#include<iostream>
#include<stack>
using namespace std;
class point{
    int a,b;
    public:
    void get(int p1,int p2){
        a=p1;
        b=p2;
    }
    void display(){
        cout<<"Point is: ("<<a<<","<<b<<")"<<endl;
    }
    point operator +(point p){
        point temp;
        temp.a=a+p.a;
        temp.b=b+p.b;
        return temp;
    }
    void operator -(){
        a=-a;
        b=-b;
    }
};
int main(){
    point p1,p2,sum;
    p1.get(2,4);
    p2.get(3,4);
    stack<point>s;
    sum=p1+p2;
    s.push(sum);
    -sum;
    s.push(sum);
    while(!s.empty())
    {
        point p=s.top();
        p.display();
        s.pop();
    }
    return 0;
}