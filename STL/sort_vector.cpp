#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>v={5,6,4,1,2};
    
    sort(v.begin(), v.end());

    for(int val: v){
        cout<<val<<" ";
    }
    return 0;
}