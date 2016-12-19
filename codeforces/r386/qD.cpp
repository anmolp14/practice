#include<iostream>

using namespace std;

int main()
 {
int n , k , b ,g ;
cin >> n >> k >> g >> b;

if((min( g , b ) + 1 )* k <  max( g , b ) )  
{ cout << "NO"; return 0;}

if( g > b )
{
   while ( g >= k && b != 0 )
   {
       for( int i=0 ; i< k ; i++ )
       {
        cout << "G" ; 
       
       } 
     g = g-k;
   cout << "B" ;
   b=b-1;
   }
int j=k-1;
while ( b >= 1 && j >=1 )   
{
   cout << "B" ;
   b=b-1;
   j=j-1; 
}
if( g >0)
{cout << "G";
	g=g-1;
}
while ( b >= k && g!=0)
{
 for( int i=0 ; i< k ; i++ )
       {
        cout << "B" ; 
       
       } 
     b = b-k;
   cout << "G" ;
   g=g-1;
 

}
while ( b != 0 )

{ cout << "B" ;
	b--;
  
}
while ( g != 0 )

{ cout << "G" ;
	g--;
  
}



}





else {

   while ( b >= k && g != 0 )
   {
       for( int i=0 ; i< k ; i++ )
       {
        cout << "B" ; 
       
       } 
     b = b-k;
   cout << "G" ;
   g=g-1;
   }
int j=k-1;
while ( g >= 1 && j >=1 )   
{
   cout << "G" ;
   g=g-1;
   j=j-1; 
}
if( b >0)
{cout << "B";
	b=b-1;
}
while ( g >= k && b!=0)
{
 for( int i=0 ; i< k ; i++ )
       {
        cout << "G" ; 
       
       } 
     g = g-k;
   cout << "B" ;
   b=b-1;
 

}
while ( b != 0 )

{ cout << "B" ;
	b--;
  
}
while ( g != 0 )

{ cout << "G" ;
	g--;
  
}

}




return 0;

 } 

