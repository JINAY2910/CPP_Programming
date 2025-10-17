//Dynamic initialization of objects using constructors
#include<iostream>
using namespace std;
class Bank{
    int principal,years;
    float rate,returnvalue;
    public:
    Bank(){};//Here this constructor must be created for b3 object
    Bank(int p,int y,float r){// r can be a value like 0.04
        principal=p;
        years=y;
        rate=r;
        returnvalue=principal;
        for(int i=0;i<years;i++){
            returnvalue *= (rate+1);
        }
    }
    Bank(int p,int y,int r){// r can be a value like 4
        principal=p;
        years=y;
        rate=float(r)/100;
        returnvalue=principal;
        for(int i=0;i<years;i++){
            returnvalue *= (rate+1);
        }
    }
    void show(){
        cout<<"Principla amount was: "<<principal<<endl;
        cout<<"Return value after "<<years<<" is "<<returnvalue<<endl;
    }
};
int main(){
    Bank b1,b2,b3;

    int p,y,R;
    float r;

    cout<<"Enter the values of p, y and r:"<<endl;
    cin>>p>>y>>r;
    b1 = Bank(p,y,r);
    b1.show();

    cout<<endl;
    
    cout<<"Enter the values of p, y and R:"<<endl;
    cin>>p>>y>>R;
    b2 = Bank(p,y,R);
    b2.show();

    return 0;
}