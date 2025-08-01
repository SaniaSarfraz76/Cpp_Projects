 #include <iostream>
    using namespace std;

           int main() {
     int number;
       cout << "Enter number: ";
       cin >> number;

    if ((number <= 10 || number >= 100) && number % 2 == 0) {
        cout << "Valid Number" << endl;
    } else {
        cout << "Invalid Number" << endl;
    }

    return 0;
}