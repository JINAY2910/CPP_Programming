/*A mathematical research group aimed to create a software model for handling and performing
operations on complex numbers efficiently. To achieve this, they designed a Complex class that
encapsulates the real and imaginary parts of a complex number. The class supports essential operator
overloading to enhance usability, including the addition and subtraction of complex numbers and
custom input and output functionality through the << and >> operators. These overloaded operators
ensure seamless arithmetic and user interaction with the system.
The task involves implementing this system and exploring its capabilities by performing various
operations on complex numbers. Participants are expected to overload the specified operators and
use them to add and subtract complex numbers, as well as to facilitate user-friendly input and output.
Additionally, the solution encourages experimenting with managing collections of complex numbers
to perform batch operations.*/
#include<iostream>
using namespace std;
class complex{
        int r;
        int i;
        public:
        void get(int x,int y){
            r=x;
            i=y;
        }
        void put(){
            cout<<"The complex number"<<r<<"+"<<i<<"i"<<endl;
        }
        complex operator <<(complex c){
            complex temp;
            temp.r= r + c.r;
            temp.i= i + c.i;
            return temp;
        }
        complex operator >>(complex c){
            complex temp;
            temp.r= r - c.r;
            temp.i= i - c.i;
            return temp;
        }
    };
int main()
{
    complex c1,c2,c3,c4;
    c1.get(5,3);
    c2.get(4,2);

    c3=c1 << c2;
    c4=c1 >> c2;

    c3.put();
    c4.put();
 return 0;
}