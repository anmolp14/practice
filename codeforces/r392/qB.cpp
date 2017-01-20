#include<iostream>
#include<string>
using namespace std;

int main()
{

	string s;
	cin >> s;
	char a[4]; int b[4] = {0} ;

	for( int j=0 ; j<4 ; j++ )
	{
		a[j] = 'e'; 

	}
	for( int i=0 ; i<4 ; i++ )
	{  int  temp = i; 
		while( temp  < s.length()     ) 
		{
			if( s[temp] != '!' )
				a[temp%4] = s[temp];  
			else{ b[i%4]++;  }
			temp+=4;

		}


	}
	char p[4] = { 'R' , 'B' , 'Y' , 'G' };
	int c=0;
	while ( c < 4 )
	{
		for( int u=0;u<4;u++ )
		{
			if ( a[u] == p[c] )
			{ 
				cout << b[u] << ' '  ;  

			}



			else if (  u == 3   )
		       	{    for( int o=0;o<4;o++ )
				{
					if ( a[o] == 'e' )
					{ 
						cout << b[u] << ' ' ;  

					} 
				}


			}

		}

c++;
 	}


		return 0;

	} 

