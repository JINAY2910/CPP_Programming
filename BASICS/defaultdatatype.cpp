//By default datatype in CPP is double.
#include<iostream>
using namespace std;
int main(){
    float b=34.4F;
    float c=34.4f;
    long double d=34.4L;
    long double e=34.4l;
    cout <<"the size of 34.4 is:"<<sizeof(34.4)<<"\n";
    cout <<"the size of 34.4F is:"<<sizeof(b)<<"\n";
    cout <<"the size of 34.4f is:"<<sizeof(c)<<"\n";
    cout <<"the size of 34.4L is:"<<sizeof(d)<<"\n";
    cout <<"the size of 34.4l is:"<<sizeof(e)<<"\n";
    return 0;
}