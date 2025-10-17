#include<iostream>
using namespace std;
class shop{
    int itemid[100];
    int itemprice[100];
    int counter;
    public:
    void initialize(){
        counter = 0;
    }
    void get(){
        cout<<"enter the item id for item "<<counter+1<<":";
        cin>>itemid[counter];
        cout<<"enter the item price for item "<<counter+1<<":";
        cin>>itemprice[counter];
        counter++;
    }
    void display(){
        for(int i=0;i<counter;i++){
            cout<<"the price of the item with id: "<<itemid[i]<<" is "<<itemprice[i]<<endl;
        }
    }
};
int main(){
    shop dukaan;
    dukaan.initialize();
    dukaan.get();
    dukaan.get();
    dukaan.get();
    dukaan.get();
    dukaan.display();
    return 0;
}