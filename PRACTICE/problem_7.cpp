//swap using move
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a="move";
    string b="yes";
    string temp=::move(a);
    a=move(b);
    b=move(temp);
    cout<<a<<endl;
    cout<<b<<endl;
   return 0;
}