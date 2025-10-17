#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
bool compare(pair<string,int>& a,pair<string,int>& b){
    return a.second>b.second;
}
int main()
{
    int n;
    cout<<"Enter the no. of students: ";
    cin>>n;

    vector<pair<string, int>>student;

    for(int i=0;i<n;i++){
        string name;
        cout<<"Enter the name for student"<<i+1<<": ";
        cin>>name;
        int score;
        cout<<"Enter the socre for student"<<i+1<<": ";
        cin>>score;
        student.push_back({name,score});
    }


    sort(student.begin(),student.end(),compare);
    int rank=1;
    for(auto it=student.begin();it!=student.end();it++){
        cout<<"Student name: "<<it->first<<" His rank: "<<rank<<" With socre: "<<it->second<<endl;
        rank++;
    }
  return 0;
}