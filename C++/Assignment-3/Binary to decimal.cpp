#include <iostream>
using namespace std;

long BINARY(long binary){
	long decimal=0,base =1;
	while(binary>0){
			long x = binary % 10;
			decimal = decimal + (x*base);
			base = base*2;
			binary = binary/10;
	}
	cout<<decimal<<endl;

}

int main(){

	long binary;
	cin>>binary;
    BINARY(binary)	;



}
