#include<iostream>
using namespace std;
int superdigit(string no,int k){
    int t=stoi(no);
    int sum=0;
    while(t>0){
        sum=sum+(t%10);
        t=t/10;
    }
    sum=k*sum;
    int tempsum=0;
  
    while(tempsum>10){
       sum=tempsum;
       tempsum=0;
    while(sum>0){
        tempsum+=(sum%10);
        sum=sum/10;
    }
}
    cout<<tempsum<<endl;
    return tempsum;
}
int main(){
    string n;
    int k;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"enter the value of k: ";
    cin>>k;
    superdigit(n,k);
    return 0;
}