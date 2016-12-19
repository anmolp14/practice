#include<iostream>
#include<vector> 
using namespace std;

int main()
{

	int m , n , p,c,r;
	cin >> m >> n >> p ;

	vector < vector <int> > vec (m , vector <int> (n )) ;
	for ( int i =0 ;i< m;i++ ) 
	{
		for ( int j = 0 ; j< n ; j++ )
		{

			(vec[i])[j] = j+1 ;  
		}


	}


	for( int k = 0;k< p ;k++ )
	{
		cin >>  r >> c ; 
		(vec[r-1])[c-1] +=1;


	}


int sum;
	for ( int i =0 ;i< m;i++ ) 
	{   sum = 0 ;
		for ( int j = 0 ; j< n-1 ; j++ )
		{

			if( (vec[i])[j]  >  (vec[i])[j+1] ) 
			{   			sum = -1 ;
			break;


			}

		}

		if( sum != -1  )
			sum = (vec[i])[n-1] -  (vec[i])[0] ;

		cout << sum << endl ; 


	}





	return 0;

} 

