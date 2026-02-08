#include<iostream>
using namespace std;


	void  print (int n1 , int n2){
		int count=0,i=1;
	  	int temp=0;
			while (count<n1){
				
	 temp = 3*i+2;
		while(temp>n2){
		
		if(temp%4==0){
			continue;
			 
		}
		count++;
		  cout<<temp<<endl; 
	}
	i++;
	
	}
}
int main() {
	int n1 ,n2 ;
	cin>>n1>>n2;
    print(n1,n2);
	
	return 0;
}
