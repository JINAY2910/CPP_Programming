#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,int>>v={{1,4},{2,3}};

    v.push_back({4,5});//only insert
    v.emplace_back(2,4);//in-place object create

    for(auto p:v){// or for(pair<int,int>p : v)
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}