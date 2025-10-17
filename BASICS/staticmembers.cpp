#include<iostream>
using namespace std;
class employee{
    int id;
    static int count;
    public:
    void get(){
        count++;
        cout<<"Enter the id of the employee no "<<count<<" : ";
        cin>>id;
    }
    void put(){
        cout<<"The id of the employee no "<<count<<" : "<<id<<endl;
    }
    static void putcount(){
        //cout<<id --> throws an error
        cout<<"the value of count: "<<count<<endl<<endl;
    }
};
int employee::count;
int main(){
    employee jinay,mantra,jash;

    jinay.get();
    jinay.put();
    employee::putcount();

    jash.get();
    jash.put();
    employee::putcount();

    mantra.get();
    mantra.put();
    employee::putcount();

    return 0;
}