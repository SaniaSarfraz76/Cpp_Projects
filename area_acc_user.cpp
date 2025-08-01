#include <iostream>
using namespace std;
int main( ) {
	
	int C;
	
	cout<<"Enter your choice."<<endl;
	cout<<"1 for Area of Circle"<<endl;
	cout<<"2 for Area of Triangle"<<endl;
	cout<<"3 for Area of Parrallelogram or Trapezoid "<<endl;
	cout<<"4 for Area of Rectangle"<<endl;
	
	cin>>C;
	
	if(C==1){
		int r;
		cout<<"Enter value of r :"<<endl;
		cin>>r;
		cout<<"Area of Circle :"<< 3.14*r*r <<endl;
		 }
		        if(C==4){
		    	                int l,w;
		    	                cout<<"Enter value of length and width:"<<endl;
		    	                cin>>l>>w;
		    	                cout<<"Area of Rectangle :"<< l*w <<endl;
							   }
		        
	
	
	else if(C==2){
		    	int b,h;
		    	cout<<"Enter base and height:"<<endl;
		     	cin>>b>>h;
		    	cout<<"Area of Triangle :"<< 0.5*b*h <<endl;
		    }
	else{
		
		
		if(C==3){
			char c;
			cout<<"Enter choice,'a'for Area of Parallelogram and 'b' for area of trapezoid."<<endl;	
			cin>>c;
			
		          if(c=='a'){
		          	int b,h;
		          	cout<<"Enter value of base and height :"<<endl;
		          	cin>>b,h;
		          	cout<<"Area of Parallelogram :"<<b*h<<endl;
		         	}
				   
				   if(c=='b'){
				  	int base1,base2,height;
				  	cout<<"Enter value of base1,base2,height :"<<endl;
				  	cin>>base1>>base2>>height;
				  	cout<<"Area of Trapezoid :"<< 0.5*(base1 + base2)*height<<endl;
				    }
				  else{
				  	cout<<"Invalid Choice,"<<endl;
				  	cout<<"PLEASE CHOOSE AGAIN"<<endl;
				    }		  
		}
		
		
	}
	
	return 0;
}