#include<iostream>
using namespace std;

int main(){
	int n;
	int count = 0;
	int num;
	cin>>n;
	int arr[n];
	int found = false;
	for(int i = 0;i<n;i++){
		cin>>arr[i];
		
	}
	cin>>num;
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
		
		if(num==arr[i]){
			count++;
			found = true;
		}
	}
	if(true){
	
	cout<<endl<<num <<" is prsent "<<count<<"times";
}
	return 0;
}
