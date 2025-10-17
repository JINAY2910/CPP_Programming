#include<iostream>
using namespace std;
int a=5;
int main(){
    int a=6;
    cout <<a<<"\n";
    cout <<::a<<"\n";//:: -> this operator is called scope resolution operator.
    return 0;
}