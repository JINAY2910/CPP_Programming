//pairs are sorted on the basis of 1st value by default
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,int>>v={{1,2},{5,8},{2,4},{3,2},{2,1}};
    
    sort(v.begin(), v.end());

    for(auto p: v){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}