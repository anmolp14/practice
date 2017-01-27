#include<iostream>
#include <algorithm>    
#include <vector> 
using namespace std;

int main()
{


	int us,ps,u_ps,no_mouse,gu=0,gp=0,computers=0; 
	cin >> us >> ps >> u_ps >> no_mouse;
	long long int sum=0;

	vector<long  int > usba ;
	vector<long  int > psa ;

	for(int i=0 ; i< no_mouse ;i++ )

	{
		long int t;
		string s;
		cin >> t ;
		cin >> s;

		if( s == "USB")
		{ usba.push_back ( t );
			gu++;}
		else
		{	psa.push_back ( t );
			gp++;   } 



	}


	sort( usba.begin() , usba.end() ) ;
	sort( psa.begin() , psa.end() ) ;
	int u=0,p=0;

	while( u < gu && us != 0     )
	{  
		sum+= usba[u];

		computers++;
		us--;
		u++;
	}


	while( p < gp && ps != 0     )
	{  
		sum+= psa[p];
		computers++;
		ps--;
		p++;
	}

	while( u_ps != 0 && u != gu  && gp!= p)
	{
		if ( usba[u] > psa[p] )
		{ sum+=psa[p] ;
			p++;
			computers++;
			u_ps--;    } 

		else{
			sum+= usba[u];
			u++;
			computers++;
			u_ps--;


		}







	}

	while ( u_ps !=0 && u != gu)  

	{


		sum+= usba[u];
		u++;
		computers++;
		u_ps--;




	}


	while ( u_ps !=0 && p != gp)  

	{


		sum+= psa[p];
		p++;
		computers++;
		u_ps--;




	}




	cout << computers << ' ' << sum;






	return 0;

} 

