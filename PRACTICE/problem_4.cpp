#include<iostream>
using namespace std;
class student{
    int marks;
    public:
    void set(int a){
        marks=a;
    }
    void display(){
        cout<<"Marks: "<<marks<<endl;
    }
    student add(student& s2){
        student s3;
        s3.marks=marks+s2.marks;
        return s3;
    }
};
int main(){
    student p,q,r;
    p.set(35);
    q.set(45);
    p.display();
    q.display();
    r=p.add(q);
    r.display();
}