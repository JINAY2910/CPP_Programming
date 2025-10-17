#include<iostream>
#include<string>
using namespace std;
class binary{
    private:
    string s;
    void check(){
        for(int i=0;i < s.length();i++){
            if(s.at(i)!='0' && s.at(i)!='1'){
                cout<<"The binary number is invalid";
                exit(0);
            }
        }
    }
    public:
    void get(void){
        cout<<"Enter the binary number:";
        cin>>s;
    }
    void onescomplement(){
        for(int i=0;i < s.length();i++){
            if(s.at(i)=='0'){
                s.at(i)='1';
            }
            else{
                s.at(i)='0';
            }
        }
    }
    void display();
};
void binary:: display(){
    check();
    cout<<"the binary number:"<<s<<endl;
}
//Nesting of member functions
int main(){
    binary b;
    b.get();
    //b.check(); --> error will be generated bcoz the member function is private
    b.display();
    b.onescomplement();
    b.display();
    return 0;
}
