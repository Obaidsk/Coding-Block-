
#include <iostream>
using namespace std;
int main() {
 int n, mult;   // Write C++ code here
cout<<"Enter the number ";
cin>>n;
for(int i= 1;i<=10;i++){
    mult=i*n;
    cout<<n<<"*"<<i<<"="<<mult<<endl;
}
    return 0;
}