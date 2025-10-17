//to find the factorial of a given number
#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n * factorial(n-1);
}
/*steps of the calculation:
factorial(4) = 4 * factoraial(3);
factorial(4) = 4 * 3 * factorial(2);
factorial(4) = 4 * 3 * 2 * factorial(1);
factorial(4) = 4 * 3 * 2 * 1;
factorial(4) = 24;
*/
int main(){
    int x;
    cout<<"enter the number:";
    cin>>x;
    cout<<"the factorial of the number:"<<factorial(x);
    return 0;
}