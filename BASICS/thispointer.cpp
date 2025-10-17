#include<iostream>
using namespace std;
    class A{
        int a;
        public:
        A& getdata(int a){
            this->a=a;
            return *this;
        }
        void display(){
            cout<<"The value: "<<a;
        }
    };
int main()
{
    A o;
    o.getdata(4).display();
  return 0;
}