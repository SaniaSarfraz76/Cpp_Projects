#include <iostream>
using namespace std;


int main() {
   float x, y;
   float r;
   cout<<"Enter 2 numbers: "<<endl;
   cin>>x>>y;
   r = x+y;
   cout<<"Sum of num ="<<r<<endl;
         r = x*y;
   cout<<"Product of num ="<<r<<endl;
            r = x-y;
   cout<<"Subtraction of num ="<<r<<endl;
   // r = x%y;
   // cout<<"Mod of num ="<<r<<endl;
            r = x/y;
   cout<<"Division of num ="<<r<<endl;

    return 0;
}