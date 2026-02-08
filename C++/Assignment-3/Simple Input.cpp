#include<iostream>
using namespace std;
int main() {
	int n[5];
	for(int i=0 ;i<5;i++){
	
	cin>>n[i];
}

	int sum =0 ;
	for(int i =0;i<5;i++){
		
		
			sum+= n[i];
			
			if(sum<0){
			break;
		}
		cout<<n[i]<<endl;
	}
	return 0;
}
