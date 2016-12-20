#include<iostream>

using namespace std;

int main()
{

	int coun=0, n , k , b ,g ;
	cin >> n >> k >> g >> b;
	
char a;
a = ( b > g ) ? 'B' : 'G' ;
(a == 'B' ) ? b-- : g-- ;
cout << a;
if((min( g , b ) + 1 )* k <  max( g , b ) )
		cout << "NO";
	else{
		while ( g > 0 && b>0 )
		{ 
			if((min( g-1 , b ) + 1 )* k <  max( g-1 , b ) )
			{cout << "B" ;
				
				b--;
			if( a =='B' )
                         {
			 
			 
			 }
else {}




			}
			else
			{ 
				cout << "G" ; 
				g--;
			}



		}
	}
	while ( g > 0 ) 
	{ cout << "G"; g--;}	
	while(b > 0 )
	{ cout << "B" ; b--;}




	return 0;

} 

