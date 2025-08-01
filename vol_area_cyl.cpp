#include <iostream>
using namespace std;

int main() {
    const double pi=3.14159;
    int r,h;
    cout << "Input r,h= " << endl;
    cin >> r>>h;

    cout << "Area of CYLINDER = " << 2*pi*r*(r+h) <<endl;
    cout << "Volume of CYLINDER = " << pi*r*r*h<< endl;

    return 0;
}