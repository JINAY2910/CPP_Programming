#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int>m;

    m["tv"]=100;
    m["tablet"]=50;
    m["headphones"]=10;
    m.insert({"camera",25});
    m.emplace("laptop",50);

    cout<<m["laptop"]<<endl;//to print value of a key

    //functions for map
    cout<<"count: "<<m.count("laptop")<<endl;
    m.erase("tv");
    
    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}