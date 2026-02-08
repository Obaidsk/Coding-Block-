#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	
	for(int i = 0;i<n;i++){
		cin>>arr[i];
		
	}
		int max=arr[0];
		int temp;
	for(int i =0;i<n;i++){
		temp=max;
		cout<<arr[i]<<" ";
		if(max<arr[i]){
			max = arr[i];
			
		}
		
	}
	cout<<endl<<temp;
	return 0;
}
