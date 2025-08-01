#include <iostream>
using namespace std;

int main() {
    //const double pi=3.14159;
    int a,b,c,d,h;
    cout << "Input a,b,c,d,h= " << endl;
    cin >> a>>b>>c>>d>>h;

    cout << "Area of TRAPEZOID = " << h*((a+b)*0.5) <<endl;
    cout << "Perimeter of TRAPIZOID = " << a+b+c+d << endl;

    return 0;
}