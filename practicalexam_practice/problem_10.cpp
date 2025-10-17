#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a=s.size();
    int x=1;
    for(int i=0;i<=a/2;i++){
        if(s[i]!=s[a-i-1]){
            x=0;
        }
    }
    if(x==0){
        cout<<"NO"<<endl;
    }
    if(x==1){
        cout<<"YES"<<endl;
    }
  return 0;
}