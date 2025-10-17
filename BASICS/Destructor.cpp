#include<iostream>
using namespace std;
class number{
    static int count;
    public:
    number(){
        count++;
        cout<<"Constructor called for object number: "<<count<<endl;
    }
    ~number(){
        cout<<"Destructor called for object number: "<<count<<endl;
        count--;
    }
};
int number::count=0;
int main(){
    cout<<"We are inside the main function"<<endl;
    cout<<"Creating a object named n1"<<endl;
    number n1;{
        cout<<"Entering this block"<<endl;
        cout<<"Creting two more objects"<<endl;
        number n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}