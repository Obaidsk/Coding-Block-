#include<iostream>
using namespace std;

int main() {
	int n ;
	cin>>n;
	int temp=0;
	int a=0;
	int b=1;

	for(int i =1;i<=n;i++){
		 temp=a+b;
		 b=a;
		 a=temp;
		 
	}
	cout<<temp;
	return 0;
}
