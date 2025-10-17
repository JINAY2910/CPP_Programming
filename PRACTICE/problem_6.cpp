#include<iostream>
using namespace std;
class celsius;
class far{
    float t1;
    public:
    void get(float a){
       t1=a;
    }
    void display(){
        cout<<"celsius: "<<t1<<endl;
    }
    friend void compare(celsius c,far f);
};
class celsius{
    float t2;
    public:
    void get(float a){
       t2=a;
    }
    void display(){
        cout<<"farhenhiet: "<<t2<<endl;
    }
    friend void compare(celsius c,far f);
};
void compare(celsius c,far f){
    float temp=((c.t2*9.0)/5.0)+32.0;
    if(temp<f.t1){
        cout<<"Temp of farhenhiet is greater";
    }
    else if(temp>f.t1){
        cout<<"Temp of celsius is greater";
    }
    else{
        cout<<"Temp are equal";
    }
}
int main(){
    celsius c;
    far f;
    c.get(-40);
    c.display();
    f.get(-40);
    f.display();
    compare(c,f);
    return 0;
}