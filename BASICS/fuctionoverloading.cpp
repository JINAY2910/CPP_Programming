#include<iostream>
using namespace std;
int sum(int a,int b){
    cout<<"using function with 2 arguments:";
    return a+b;
}
int sum(int a,int b,int c){
    cout<<"using function with 3 arguments:";
    return a+b+c;
}
int main(){
    cout<<sum(3,4)<<endl;
    cout<<sum(3,4,5)<<endl;
    return 0;
}