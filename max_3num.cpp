#include <iostream>
using namespace std;

int main() {
    int n1,n2,n3;

    
    cout << "Enter n1,n2,n3:"<<endl;
    cin >>n1>>n2>>n3;

    
    if (n1>n2 && n1>n3) {
        cout << "Max=" <<n1;
    }
	 else if(n2>n1 && n2>n3) {
        cout << "Max =" <<n2;
    }
    else {
    	cout<<"Max ="<<n3;
	}

    return 0;
}