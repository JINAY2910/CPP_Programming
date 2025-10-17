#include<iostream>
#include<cstring>
using namespace std;
class string1{
    string s;
    public:
    void get(string a){
        s=a;
    }
    void display(){
        cout<<s<<endl;
    }
    string1 operator +(string1 x){
        string1 temp;
        temp.s= s + x.s;
        return temp;
    }
    int operator == (string1 x){
        if(s == x.s){
            return 1;
        }
        else{
            return 0;
        }
    }
    int operator < (string1 x){
        if(s.compare(x.s)<0){
            return 1;
        }
        else{
            return 0;
        }
    }
    int operator > (string1 x){
        if(s.compare(x.s)>0){
            return 1;
        }
        else{
            return 0;
        }
    }
    void operator +=(string1 x){
        s=s+x.s;
    }
};
int main()
{
    string1 s1,s2,s3;
    s2.get("JINAY");
    s1.get("IT");
    s3=s1+s2;
    s3.display();
    if(s1==s2){
        cout<<"Both objects are equal"<<endl;
    }
    else if(s1>s2){
        cout<<"s1 is greater than s2"<<endl;
    }
    else if(s1<s2){
        cout<<"s2 is greater than s1"<<endl;
    }
    s1+=s2;
    s1.display();
  return 0;
}