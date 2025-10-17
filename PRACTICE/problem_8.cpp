#include <iostream>
using namespace std;

class A
{
    private:
     int a;
    public:
     int c;
     int geta(){
        return 1;
     }
};

class B : protected A
{
    private:
     int b;
    public:
     void getb(){
        cout<<"B"<<endl;
     }
     void getab(){
        cout<<geta()<<endl;
     }
};

class C : protected B{

    public:
      void getabc(){
        cout<<geta()<<endl;
      }
};

int main(){
    B bb;
   
    bb.getb();
    bb.getab();
}