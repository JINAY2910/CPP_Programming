//to use this binary_search the vector should be sorted in ascending order
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5};
    
    cout<<binary_search(v.begin(),v.end(),4)<<endl;
    cout<<binary_search(v.begin(),v.end(),10)<<endl;

    return 0;
}