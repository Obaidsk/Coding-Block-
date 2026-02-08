#include <iostream>
using namespace std ;
int main()
{
 int  n=5;
  for(int i = n ;i>=1;i--){
      for(int j = i ;j<=n;j++){
          cout<<"  ";
      }
          for(int k=i;k>=1;k--){
          cout<<"*";
      }
      cout<<endl;
  }

    return 0;
}