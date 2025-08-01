#include <iostream>
using namespace std;

int main() {
    int percentage;

    cout << "Enter your grades in percentage : "<<endl;
    cin >> percentage;
    
 if(percentage < 0 || percentage > 100 ){
    	cout<<"Invalid Percentage,Please enter percentage between 0 and 100."<<endl;
	}
    
    else if( percentage >= 90) {
     	cout<<"You got A+ grade"<<endl;
	 }
	 
	 else if(percentage >= 80 && percentage <=89){
	 	cout<<"You got A grade"<<endl;
	 }
	else if ( percentage >=  70 && percentage <=  79 ){
		cout<<"	You got B grade "<<endl;
	}
	else if ( percentage >=  60 && percentage <=  69){
		cout<<"You got a C grade "<<endl;
	}
	else if ( percentage >=  50  && percentage <=  59){
		cout<<"You got a D grade "<<endl;
	}
else{
		cout<<"Fail"<<endl;
	}
    return 0;
}

