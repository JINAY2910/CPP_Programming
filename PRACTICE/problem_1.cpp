#include<iostream>
using namespace std;
class shape{
    public:
    string name;
    void get(string n){
       name = n;
    }
    void put(){
        cout<<name<<endl;
    }
};
class circle :public shape{
    public:
    int r;
    void get(int radius){
        r = radius;
    }
    void put(){
        float area=3.14*r*r;
        cout<<area<<endl;
    }
};
int main(){
    circle c;
    c.shape::get("circle");
    c.shape::put();
    c.get(5);
    c.put();
    return 0;
}