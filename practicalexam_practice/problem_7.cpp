/*A data analytics firm is developing a tool to process numerical sequences efficiently. One of the key
requirements is to reverse a given sequence of integers while ensuring optimized performance using
modern C++ techniques. The system should allow users to input a sequence of numbers, process the
reversal using iterators, and display the transformed output.
To accomplish this, two approaches are explored. The first method leverages the built-in std::reverse()
function, which efficiently reverses elements within a dynamically managed sequence. The second
approach involves manually implementing the reversal using iterators, providing deeper insight into
how iterators navigate and modify data structures.
The system uses a dynamic storage mechanism to handle sequences of varying sizes efficiently.
Iterators facilitate traversal and modification, ensuring that elements are manipulated without direct
indexing.*/
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    vector<int>v;
    int n,input;
    cin>>n;
    /*for(int i=0;i<n;i++){
        cin>>input;
        v.push_back(input);
    }
    reverse(v.begin(),v.end());
    for(auto vec:v){
        cout<<vec<<" ";
    }*/
   for(int i=0;i<n;i++){
        cin>>input;
        v.push_back(input);
    }
    for(auto it=v.rbegin();it!=v.rend();it++){
        cout<<*it<<" ";
    }
  return 0;
}