#include<iostream>
using namespace std;
class Shop{
    int id[100];
    string name[100];
    int quantity[100];
    int price[100];
    int counter;
    public:
    void initialize(){
        counter=0;
    }
    void get(){
        cout<<endl;
        int n_items;
        cout<<"Enter the no of items in the shop: ";
        cin>>n_items;
        cout<<endl;
        for(int i=0;i<n_items;i++){
            cout<<"Enter the ID of the item: ";
            cin>>id[counter];
            cout<<"Enter the name of the item: ";
            cin>>name[counter];
            cout<<"Enter the quantity of the item: ";
            cin>>quantity[counter];
            cout<<"Enter the price of the item: ";
            cin>>price[counter];
            counter++;
            cout<<endl;
        }
        cout<<endl;
    }
    void display(){
        cout<<endl;
        for(int i=0;i<counter;i++){
            cout<<"The ID of the item: "<<id[i]<<endl;
            cout<<"The name of the item: "<<name[i]<<endl;
            cout<<"THE quantity of the item: "<<quantity[i]<<endl;
            cout<<"The price of the item: "<<price[i]<<endl<<endl;
        }
        cout<<endl<<endl;
    }
    void add(){
        cout<<endl;
        int n;
        cout<<"Enter the no of items you want to add in the shop: ";
        cin>>n;
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<"Enter the ID of the item: ";
            cin>>id[counter];
            cout<<"Enter the name of the item: ";
            cin>>name[counter];
            cout<<"Enter the quantity of the item: ";
            cin>>quantity[counter];
            cout<<"Enter the price of the item: ";
            cin>>price[counter];
            counter++;
            cout<<endl;
        }
        cout<<endl;     
    }
    void quantityupdate(){
        cout<<endl;
        int searchid;
        cout<<"Enter the item ID to add quantity to an existing item: ";
        cin>>searchid;
        cout<<endl;
        int c=0;
        for(int i=0;i<counter;i++){ 
            if(searchid==id[i]){
                int newquantity;
                cout<<"Enter the quantitiy to be added: ";
                cin>>newquantity;
                cout<<endl;
                quantity[i]=quantity[i]+newquantity;
                c=1;
            }
        }
        if(c==0){
            cout<<"The item does not exist";
        }
        cout<<endl;
    }
    void total(){
        cout<<endl;
        int total=0;
        for(int i=0;i<counter;i++){
            total=total+(price[i]*quantity[i]);
        }
        cout<<"The total price of all the items: "<<total;
        cout<<endl<<endl;
    }
};
int main(){
    Shop dukaan;
    dukaan.initialize();
    dukaan.get();
    dukaan.display();
    while(true){
        int no;
        cout<<"1.To add new item"<<endl<<"2.To add quantity to an existing item"<<endl<<"3.To know the total value of all the items"<<endl<<"4.To display all details"<<endl<<"5.TO EXIT"<<endl;
        cout<<"Enter your choice: ";
        cin>>no;
        switch(no){
            case 1:
            dukaan.add();
            break;

            case 2:
            dukaan.quantityupdate();
            break;

            case 3:
            dukaan.total();
            break;

            case 4:
            dukaan.display();
            break;

            case 5:
            cout<<endl;
            cout<<"Exiting the program....";
            cout<<endl;
            exit(0);
            break;

            default:
            cout<<endl<<endl;
            cout<<"Enter a valid input";
            cout<<endl<<endl;
            break;
        }
    }
    return 0;
}