#include<iostream>

using namespace std;


int main()

{int a,b,a1,b1,a2,b2;

	cin >> a >>b >> a1 >> b1 >> a2 >> b2; 
if( a < b ) { swap ( a,b)  ;}   
	
// Case	1
 
int c1la = max ( a1+a2 , max(b1,b2) ); 
int  c1lb = min ( a1+a2 , max(b1,b2) ) ;
if( a >= c1la && b >= c1lb ) { cout << "YES"; return 0;} 
//Case 2
int c2la = max ( a1+b2 , max(b1,a2) );    
int c2lb = min ( a1+b2 , max(b1,a2) ) ;
if( a >= c2la && b >= c2lb ) { cout << "YES"; return 0;} 
 // Case 3
int c3la = max ( b1+a2 , max(a1,b2) ); 
int c3lb = min ( b1+a2 , max(a1,b2) ) ;
if( a >= c3la && b >= c3lb ) { cout << "YES"; return 0;} 
//Case 4

int c4la = max ( b1+b2 , max(a1,a2) ); 
int c4lb = min ( b1+b2 , max(a1,a2) ) ;
if( a >= c4la && b >= c4lb ) { cout << "YES"; return 0;} 

cout << "NO" ;

/*    
	
max of (a1+ a2 and max of b1,b2) along max(a,b)

	a1 + b2 and max of b1,a2 

	b1 + a2 and max of a1,b2

	b1 + b2 and max of a1 ,a2 

*/
	return 0;
}
