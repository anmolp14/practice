#include<iostream>

using namespace std;

int main()
{

	int n , m ;

	cin >> n >> m;

	int a[n],cnt=0;
	for ( int i=0 ;i<n;i++ )
	{cin >> a[i]; } 	

	for( int j =0 ;j < m ; j++ )
	{ 
		int st , en,sum = 0 ;
		cin >> st >> en ;

		for ( int l = st -1 ; l < en ; l++ ) 
		{
			sum += a[l];
		}
		if ( sum > 0 )
			cnt+= sum;

	}


	cout << cnt;

	return 0;

} 

