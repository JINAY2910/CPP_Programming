#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>m;

    m.emplace("tablet",100);
    m.emplace("headphones",100);
    m.emplace("tv",100);
    m.emplace("camera",100);

    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}