#include<iostream>
#include<math.h>
using namespace std;

int main()
{

	long long  int n,i=1,j=0,ndiv=0;
	long int k;


cin >> n >> k ;

while( i <= sqrt(n)  &&  j!= k  )
		{
		
	   if( n%i == 0 ) 	
	  	j++;


   i++;

	 	
	 }

if( j==k)
	cout << i-1 ;
else { 
	ndiv = 2*j;
	if ( i*i ==n) 
          ndiv--; 
  if( ndiv < k)
     cout << -1 ;
   else{
         i--; 
     while( j!=k  )
    {
      if( n%i ==0 ) 
          j++;
	  
	
	
    
    i--;
    }
   cout << n/(i+1) ;
   
   }


  
}








	return 0;

} 

