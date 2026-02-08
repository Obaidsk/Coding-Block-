#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++){
		cin>>arr[i];
		
	}
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
		
	}
	int i1,i2;
	cin>>i1>>i2;
	 
	arr[i1] = arr[i1]+arr[i2];
	arr[i2] = arr[i1]-arr[i2];
	arr[i1] = arr[i1] - arr[i2];
	
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
		
	}
	return 0;
}
