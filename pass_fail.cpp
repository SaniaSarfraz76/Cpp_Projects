#include <iostream>
using namespace std;
int main() {
    int m;
    cout<<"Enter Marks"<<endl;
    cin>>m;
    if(m>40){
        cout<<"Congo! You are pass by "<<m;
    }
    else{
        cout<<"Fail "<<endl;
    }
    return 0;
}