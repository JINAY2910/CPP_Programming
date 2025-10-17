#include<iostream>
using namespace std;
class Complex{
    int i,r;
    public:
    void get(int real,int image){
        r=real;
        i=image;
    }
    void display(){
        cout<<r<<"+"<<i<<"i"<<endl;
    }
    Complex operator <<(Complex c){
        Complex temp;
        temp.r=r+c.r;
        temp.i=i+c.i;
        return temp;
    }
    Complex operator >>(Complex c){
        Complex temp;
        temp.r=r-c.r;
        temp.i=i-c.i;
        return temp;
    }
};
int main()
{
    Complex c1,c2,c3,c4;
    c1.get(3,5);
    c2.get(2,1);

    c3=c1 << c2;

    c4=c1 >> c2;

    c3.display();
    
    c4.display();
  return 0;
}