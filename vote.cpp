#include <iostream>
using namespace std;
int main() {
    int age;
    cin>>age;
    if (age>=18){
        cout<<"HURRY! You can cast vote"<<endl;
    }
    else{
        cout<<"OPPS! You can not cast vote"<<endl;
    }
    return 0;
}