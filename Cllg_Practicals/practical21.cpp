#include<iostream>
using namespace std;
class Rectangle{
    int l,w;
    public:
    void setdimensions(int a,int b){
        l=a;
        w=b;
    }
    int area(){
        int area=l*w;
        cout<<"The area of the rectangle: "<<area<<endl;
        return area;
    }
    int perimeter(){
        int perimeter=2*(l+w);
        cout<<"The perimeter of the rectangle: "<<perimeter<<endl<<endl;
        return perimeter;
    }
};
int main(){
    Rectangle r1,r2,r3,r4;
    r1.setdimensions(2,5);
    r2.setdimensions(3,2);
    r3.setdimensions(6,8);
    r4.setdimensions(8,5);
    cout<<endl;
    r1.area();
    r1.perimeter();
    r2.area();
    r2.perimeter();
    r3.area();
    r3.perimeter();
    r4.area();
    r4.perimeter();
    return 0;
}