#include<iostream>
#include<stack>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	stack < char> z;
	int d=0 , r=0 ;
	for ( int i =0;i<n;i++)
	{
		if(s[i] == 'D')
			d++;
		else
			r++;
	}
	int j = 0;
	while ( d !=0 && r!=0)
	{
		if( s[j%n] != 'A' )
		{	if ( z.empty() )
			{     	
				z.push(s[j%n]); 

			}
			else {

				if ( z.top() == s[j%n])
					z.push(s[j%n]);

				else 
				{ 
					(z.top() == 'D') ? r-- : d--  ; 
					z.pop();
					s[j%n] = 'A' ;


				}	






			}


		}
	j++;
	}

	(d== 0 ) ? cout << "R" : cout << "D" ;








	return 0;

} 

