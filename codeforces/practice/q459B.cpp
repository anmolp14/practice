#include<iostream>

using namespace std;

void merge (  long int *a , int n, long int *b , int n1, long int *d  )
{       
	int i=0,j=0,k=0;

	while( i<n && j<n1 ) 

	{
		if (a[i]<b[j])
		{d[k] =a[i]; k++;  i++;}
		else
		{ d[k] =b[j]; k++ ; j++;}    

	}
	while(i<n ) {  d[k] = a[i]; k++;  i++ ;  }
	while(j<n1) {  d[k] = b[j]; k++;  j++ ;  }
for ( int i =0;i< n+n1 ;i++ )
{
 cout << d[i] ;
}
cout << '\n';
}	



void merge_sort1(long int *a , int i ,int j )

{

	if( i<j)
	{
		int mid = (i+j)/2;
		merge_sort1 ( a, i ,mid);
		merge_sort1 ( a , mid+1 , j ) ;
		long int c[j-i+1] ;	
		merge( a+i , mid-i+1 , a+mid+1+i , j-mid , c );
		for(int  f= 0; f <=j-i ;f++)

		{ a[f]=c[f]; }



	}





}
int main ()

{

	int n,i;
	cin >> n;
	long int a[n];

	for( i= 0; i < n ;i++)

	{ cin >> a[i]; }

	merge_sort1 ( a , 0 , n-1  ) ;


	for( i= 0; i < n ;i++)

	{ cout << a[i]<< '\n'; }





	return 0;

}
