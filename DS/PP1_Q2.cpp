#include<iostream>

using namespace std;
int binary (int *a , int l , int r )
{  
	int mid = (l+r)/2 ; 
	if ( a[mid] == 1 )
	{       if( a[mid-1] == 0 )
	        	return mid+1;
		else
		{
		       	binary ( a , l , mid-1) ;
		} 
	}
        else {
		if( a[mid+1] == 1)
			return mid+2;
                else{
		        binary ( a , mid+1 , r ) ;
		} 
               
	}


}
int main()
{

	int n;
	cin >>n ;
	int a[n];
	for( int i=0;i<n;i++)

	{cin >> a[i];}

	cout << binary ( a ,0, n-1 ) ;







	return 0;

} 

