#include<iostream>
using namespace std;


	long  GCD(long n1 , long n2){
	  		long temp=0;
	  	
	    	while (n2!=0){
			temp=n1%n2;
			n1=n2;
			n2=temp;
		}
	return n1;
	}
	
	long LCM(long n1 , long n2){
		return n1/GCD(n1,n2)*n2;
		
	}
	int main() {
		long n1 ,n2 ;
		cin>>n1>>n2;
    	cout<<LCM(n1,n2);
	
	return 0;
}
