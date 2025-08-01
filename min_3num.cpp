
     #include <iostream>
     using namespace std;

         int main() {
         int n1,n2,n3;

    
    cout << "Enter n1,n2,n3:"<<endl;
    cin >>n1>>n2>>n3;

    
    if (n1<n2 && n1<n3) {
        cout << "Min=" <<n1;
    }
	 else if(n2<n1 && n2<n3) {
        cout << "Min =" <<n2;
    }
    else {
    	cout<<"Min ="<<n3;
	}

    return 0;
   }
