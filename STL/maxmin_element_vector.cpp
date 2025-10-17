#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>v={5,6,4,1,2};
    
    cout<<*(max_element(v.begin(), v.end()))<<endl;//we need to derefrence the iterator to get the value
    cout<<*(min_element(v.begin(), v.end()))<<endl;
    
    return 0;
}