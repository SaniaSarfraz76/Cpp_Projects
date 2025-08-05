#include <iostream>
using namespace std;
int main()
{
    int n,c;
    cout<<"Enter value of n : "<<endl;
    cin>>n;
    c=1;
    while(c<=1000){
        cout<<n<<"*"<<c<<"="<<n*c<<endl;
        c++;
    }
    return 0;
}
