#include<iostream>
using namespace std;
int main(){
    pair<int,pair<int,int>>p={1,{2,3}};
    cout<<p.first<<endl;//1
    cout<<p.second.first<<endl;//2
    cout<<p.second.second<<endl;//3
    return 0;
}