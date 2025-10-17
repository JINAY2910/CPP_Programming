#include<iostream>
using namespace std;
int fib(int n){
    if(n<=2){
        return n;
    }
    return fib(n-2) + fib(n-1);
}
int main(){
    int x;
    cout<<"enter the number:";
    cin>>x;
    cout<<"the term at the positon"<<x<<":"<<fib(x);
    return 0;
}