#include<iostream>
using namespace std;
class grade{
    protected: 
    int marks;
    public:
    virtual void calcgrade()=0;
};
class ug:public grade{
    
};
class pg:public grade{

};
int main()
{

  return 0;
}