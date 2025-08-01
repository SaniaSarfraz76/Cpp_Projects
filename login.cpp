#include<iostream>
using namespace std;
int main(){
string username;
    cout << "Enter username: ";
    cin >> username;

string password;
    cout << "Enter password: ";
    cin >> password;


    if (username == "admin" && password == "1234") {
        cout << "Login successful!" << endl;
    }
    else {
        cout << "Incorrect password." << endl;
    }

    return 0;
}