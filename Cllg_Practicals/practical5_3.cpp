#include<iostream>
#include<stack>
using namespace std;
class point
{
    int x,y;
public:
    point()
    {
        x=0;
        y=0;
    }
    point(int a,int b)
    {
        x=a;
        y=b;
    }
    point operator-()
    {
        point t;
        t.x=-x;
        t.y=-y;
        return t;
    }
    point operator+(point o)
    {
        point t;
        t.x=x+o.x;
        t.y=y+o.y;
        return t;
    }
    int operator==(point o)
    {
        if(x==o.x && (y==o.y))
            return 1;

        else
            return 0;
    }
    void display()
    {
        cout<<x<<"and"<<y<<endl;
    }
    void get()
    {
        cin>>x>>y;
    }
};
int main()
{
    point p1(2,4),p2(4,6),sum;
    /*stack<point>s;
    sum=p1+p2;
    s.push(sum);
    sum=-sum;
    s.push(sum);
    while(!s.empty())
    {
        point p=s.top();
        p.display();
        s.pop();
    }
     point a1,a2,a3;
     int b1,b2;
     a1.get();
     a2.get();*/
     point arr[10];
int top =-1;
sum =p1 + p2;
arr[++top]=sum;
sum=-sum;
arr[++top]=sum;
while(top>=0){
    arr[top--].display();
}
}