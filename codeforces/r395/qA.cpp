#include<iostream>
using namespace std;


int gcdi( int a , int b )
{
   if( b==0 )
	return a;
   else
	return ( gcdi (b , a % b) ) ;   
 


}

int main()
 {
int  n,m,z,lc ;
cin >> n >> m >> z;
lc = ( n * m)/ gcdi(n,m   )  ;

cout << z/lc ;  









return 0;

 } 

