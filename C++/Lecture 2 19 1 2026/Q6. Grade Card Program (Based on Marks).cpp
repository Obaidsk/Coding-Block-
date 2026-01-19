#include <iostream>
using namespace std;
int main() {
    
  int marks;
  cout<<"Enter Your marks";
  cin>>marks;  
  
  if (90<=marks ){
      cout<<"A";
  }
  
  else if (80<=marks ){
      cout<<"B";
  }
   else if (70<=marks ){
      cout<<"c";
  }
   else if (60<=marks ){
      cout<<"D";
  }
  
   else{
      cout<<"FAIL";
  }
    return 0;
}