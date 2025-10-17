#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int>m;

    m["tv"]=100;
    m["tablet"]=50;
    m["headphones"]=10;
    m["camera"]=150;

    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    if(m.find("tablet") != m.end()){
        cout<<"Found";
    }
    else{
        cout<<"NOT FOUND";
    }

    return 0;
}