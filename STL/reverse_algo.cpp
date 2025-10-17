#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>v={5,6,4,1,2};
    
    //reverse(v.begin(), v.end()); -> entire vector reverse
    reverse(v.begin()+1,v.begin()+3);

    for(int val: v){
        cout<<val<<" ";
    }
    return 0;
}