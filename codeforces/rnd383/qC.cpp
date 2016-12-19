#include<iostream>

using namespace std;

int main()
{

	int n;
	cin >> n;
        if ( n == 1 ) 
	{ cout << -1 ; 
	      	return 0 ; }  	
	int a[n],sum, nex, minis= n+1  ;

	for( int i=0;i<n;i++ ) 
		cin >> a[i];

	for( int i=0;i<n;i++ ) 
	{   sum = 0;

		nex = a[a[i]-1] ;  
		sum++; 
		while ( nex != a[i] && sum <= n+1   )  


		{    
			nex = a[nex-1] ;  
			sum++;

		}    

           if ( sum == n+1 || sum == 1 ) 
		  continue;
           
	  if ( sum % 2 == 0  &&   sum/2 < minis )  
              minis = sum/2;
          if ( sum % 2 !=0 && sum < minis)
		  minis = sum ; 

	}

   if ( minis == n+1 )
	   cout << -1;


   else 
	   cout << minis ;







	return 0;

} 

