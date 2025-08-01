#include<iostream>
using namespace std;

int main(){
    int a, b, x,y;
    a = b = x = y = 7;
    
    cout<<"a ="<<++x + --y<<endl;
    cout<<"b ="<<x++ + y--<<endl;
    
    cout<<"X ="<<x++<<endl;
    cout<<"Y ="<<y--<<endl;
    cout<<"B ="<<++b<<endl;
    cout<<"A ="<<--a<<endl;
    
    
    return 0;
    }