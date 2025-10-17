#include<iostream>
#include<map>
#include<sstream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"enter the sentence: ";
    getline(cin,s);
   
    map<string,int>count;

    stringstream ss(s);
    string s1;
    
    while(ss >> s1){
        count[s1]++;
    }

    cout<<"Word Counted are: "<<endl;
    for(auto it=count.begin();it!=count.end();it++){
        cout<<it->first<<": "<<it->second<<endl;
    }
  return 0;
}