#include<iostream>
using namespace std;
class Student{
    int roll_no;
    string name;
    int marks[3];
    public:
    Student(){
        roll_no=0;
        name="N/A";
        for(int i=0;i<3;i++){
            marks[i]=0;
           }
    }
    Student(int a,string b,int c[3]){
        roll_no=a;
        name=b;
        for(int i=0;i<3;i++){
            marks[i]=c[i];
        }
    }
    void display(){
        cout<<endl<<"Student Details"<<endl<<endl;
        cout<<"Roll Number: "<<roll_no<<endl;
        cout<<"Name of the student: "<<name<<endl;
        for(int i=0;i<3;i++){
            cout<<"The marks of subject"<<i+1<<" is: "<<marks[i]<<endl;
        }
        cout<<endl;
    }
    float avg(){
        int sum=0;
        for(int i=0;i<3;i++){
            sum += marks[i];
        }
        float average=(float(sum))/3;
        return average;
    }
};
int main(){
    int rollno;
    string name;
    int marks[3];

    cout<<"Enter the roll no: ";
    cin>>rollno;
    cout<<"Enter the name: ";
    cin>>name;
    for(int i=0;i<3;i++){
        cout<<"Enter the marks of the subject"<<i+1<<": ";
        cin>>marks[i];
    }
    
    Student s(rollno,name,marks);
    s.display();
    cout<<endl;
    cout<<"The average marks of all subjects: "<<s.avg()<<endl;
    return 0;
}