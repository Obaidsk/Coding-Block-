#include<iostream>
#include<string>

using namespace std;

int main() {
	string num ;
	int inverted;
	cin>>num;
	for (int i =0;i<num.length();i++){
		int digit = num[i] - '0';
		inverted = 9-digit;
		
		if(i==0 && inverted==0){
			continue;
		}
		 if(inverted < digit){
		 	num[i]=inverted + '0';
		 }
		
	
	}
	cout<<num;
	return 0;
}
