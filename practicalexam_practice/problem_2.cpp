#include<iostream>
using namespace std;
class shape{
    string name;
    public:
    void get(string a){
        name=a;
    }
    void put(){
        cout<<"your shape: "<<name<<endl;
    }
};
class circle : public shape{
    int r;
    public:
    void get(int radius){
        r = radius;
    }
    void put(){
        float area=3.14*r*r;
        cout<<area<<endl;
    }
};
int main()
{
    circle c;
    c.shape::get("Circle");
    c.get(5);
    c.shape::put();
    c.put();
  return 0;
}