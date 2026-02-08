#include <iostream>
using namespace std ;
int main()
{
 int  n;
 cout<<"Enter a number "<<endl;
 cin>>n;
 int j;
  for(int i = 1 ;i<=n;i++){
     for(int j=1 ;j<=n;j++){
		   cout<<" * ";
             }
           for(int j =1 ;j<=2*i-1;j++){
		   cout<<" ";
              }
		      for(int j=1 ;j<=n;j++){
		       cout<<" * ";
           }
        }
        for(int i = n ;i>=1;i--){
            for(int j=1 ;j<=n-1;j++){
		   cout<<"*";
             }
           for(int j =1 ;j<=2*(n-i) - (2-i) +1; j++){
		   cout<<"  ";
              }
		      for(int j=1 ;j<=n-1;j++){
		       cout<<"*";
           }
           cout<<endl;
        }
        
        
        
        return 0;
    }
      
      
  

 

