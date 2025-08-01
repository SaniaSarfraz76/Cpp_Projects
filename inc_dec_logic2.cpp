#include<iostream>
using namespace std;

int main(){
    int a, b, x,y;
    a = b = x = y = 3;
    
    cout<<"a ="<< ++x + y-- <<endl;
    cout<<"b ="<< x++ + --y <<endl;
    
    cout<<"x ="<<x<<endl;
    cout<<"y ="<<y<<endl;
    
    return 0;
    }