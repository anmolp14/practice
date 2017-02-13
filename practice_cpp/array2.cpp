#include<iostream>

using namespace std;

void check( int aray[] , int len  )
 {  
     if( len == 0  )
         return;           	     
     cout << aray[0] ;
     check( (aray+1) , len-1 );
   
 
 }
int main()
 {

int a[6] = { 1,2,3,4,5,6};
check (a,6  );









return 0;

 } 

