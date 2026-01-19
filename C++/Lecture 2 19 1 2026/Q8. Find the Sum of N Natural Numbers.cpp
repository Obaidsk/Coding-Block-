#include <iostream>
using namespace std;
int main() {
   
int n;
int sum=0;
cout<<"Enter the number you want to get sum of";
cin>>n;
for(int i= 1;i<=n;i++){
    sum+=i;
}
cout<<"THE SUM OF GIVEN NATURAL NUMBER :"<<sum;
    return 0;
