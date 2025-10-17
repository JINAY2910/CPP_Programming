#include<iostream>
using namespace std;
int main(){
    int a=45;
    float b=45.34;
    cout <<"the value of a is:"<<float(a)<<"\n";
    cout <<"the value of a is:"<<(float)a<<"\n";
    cout <<"the value of b is:"<<int(b)<<"\n";
    cout <<"the value of b is:"<<(int)b<<"\n";

    int c=int(b);//or int c=(int)b;
    cout <<a+b<<"\n";
    cout <<a+c<<"\n";
    return 0;
}