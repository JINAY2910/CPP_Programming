// setw() and endl are manipulators in CPP
#include<iostream>
#include<iomanip>// for setw()
using namespace std;
int main(){
    int a=4,b=34,c=1286;
    cout <<"the value of a without setw:"<<a<<"\n";
    cout <<"the value of b without setw:"<<b<<"\n";
    cout <<"the value of c without setw:"<<c<<"\n";

    cout <<"the value of a with setw:"<<setw(4)<<a<<"\n";
    cout <<"the value of b with setw:"<<setw(4)<<b<<"\n";
    cout <<"the value of c with setw:"<<setw(4)<<c<<"\n";
    return 0;
}