#include<iostream>

using namespace std;

int main()
 {

int n,m,x,y; long long int k;

cin >> n >> m >> k >> x >>y;

long long int ma , mi, no ; 

if ( n == 1 )
  {  ma = k/ (  m );
	mi = k/ m ;  
	  if( k%m != 0 )
               ma++;


  }  
else if ( n ==2 ) 
{
   ma = k / (2* m   ) ;
   mi = k / (2*m) ;
      if(  k % ( 2*m ) != 0 )
	      ma++; 
   

}

else 
{
   ma = 2 * ( k / ( 2 * (n-1) * m ) ) ;

     if (  k % ( 2 * (n-1) * m ) != 0 )
     {
        if (  k % ( 2 * (n-1) * m ) <= n * m ) 
         ma++;
        else 
		ma+=2;
      
     
     }
   
  
  }

if ( n !=1 && n!= 2)
{  if ( k < ( n-1) * m + m  ) 
          mi=0;
   else {
     mi= 1;
     mi+= ( k - (n-1) * m - m ) / ( 2 * m * (n-1) )  ;
   
   
   }
}


if( n == 1  || n == 2   )
 {  
      no = k/(m*n)  ;
if ( k  % (m*n) >= y+ (n-1 ) * m )
      no++;	

}

else if ( ( x == 1 || x == n)  )
{
   if ( k < ( n-1) * m + y ) 
          no=0;
   else {
     no= 1;
     no+= ( k - (n-1) * m - y ) / ( 2 * m * (n-1) )  ;
   
   
   }



}




else {

no = 2 * ( k / ( 2 * (n-1) * m ) ) ;

if   ( k % ( 2 * (n-1) * m )  !=0   ) 
 {
    
    if (   k % ( 2 * (n-1) * m )  >= (x-1) * m + y     ) 
       no++;
    if(  k % ( 2 * (n-1) * m ) >= n*m + (n-x-1) * m + y )
      no ++ ; 
 
 
 
 }


}





cout << ma << ' '<<  mi << ' '<< no  ;


return 0;

 } 

