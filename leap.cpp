#include <iostream>
using namespace std;
int main() {
    int Y;
    cin>>Y;
    if (Y%4==0){
        cout<<"Leap Year ="<<Y;
    }
    else{
        cout<<"It is not a Leap Year"<<endl;
    }
    return 0;
}
