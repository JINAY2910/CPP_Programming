#include<iostream>
using namespace std;
class employee{
    int id;
    int salary;
    public:
    void get(){
        cout<<"Enter the id of the employee no : ";
        cin>>id;
        cout<<"Enter the salary of the employee no : ";
        cin>>salary;
    }
    void put(){
        cout<<"The id of the employee no : "<<id<<endl;
        cout<<"The salary of the employee no : "<<salary<<endl<<endl;
    }
};
int main(){  
    employee google[5];
    for(int i=0;i<5;i++){
        google[i].get();
        google[i].put();
    }
    return 0;
}