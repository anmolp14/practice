#include<iostream>

using namespace std;

int main()
 {
long long int  n , a ,b, c;

cin >> n >> a >> b>> c ;

long int no = n % 4 ;


if ( no == 0)
	cout << no ;
else if (no == 1 ) 
   cout << min ( 3* a , min( a + b , c ) ) ;
else if( no ==2 )
	cout << min ( 2*a ,min( b, 2 *c )) ; 
else 
 cout <<min ( b+c , min(3*c, a)) ; 





return 0;

 } 

