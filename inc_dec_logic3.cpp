#include<iostream>
using namespace std;

int main(){
    int a, b, x,y;
    a = 2,b=1,x=3,y=7;
    
    cout<<"a ="<< ++x - y-- <<endl;
    cout<<"b ="<< x++ - --y <<endl;
    
    cout<<"x ="<<x<<endl;
    cout<<"y ="<<y<<endl;
    
    return 0;
    }