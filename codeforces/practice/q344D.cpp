#include<iostream>
#include<stack>
#include<cstdio>
using namespace std;

int main()
{

	stack < char > a ;
string s ;


cin >> s;
	char b= s[0];

	
int i=1 ;

	while ( b != '\0' )
	{
		if ( a.empty() ) 
			a.push(b);
		else

		{
			if( a.top() == b )
				a.pop(); 
			else
				a.push(b);

		}

        
	   b = s[i];	
i++;

	}


	if ( a.empty () ) 
		cout << "YES" ;
	else
		cout << "NO" ;




	return 0;

} 

