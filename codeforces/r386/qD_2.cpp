#include<iostream>

using namespace std;

int main()
 {
int n , k , b ,g ;
cin >> n >> k >> g >> b;

if((min( g , b ) + 1 )* k <  max( g , b ) )
{ cout << "NO"; return 0;}


char largec = (b>g) ? 'B' : 'G' ; 
char smallc = (largec == 'B') ? 'G' : 'B' ;
int largei = (b>g) ? b : g ; 
int smalli = (largei == b) ? g : b ;

int conprint = largei/(smalli+1) ;
if( conprint == k)
{
  for ( int i=0 ; i< smalli ; i++ )
  {
     for( int j=0 ; j < k ; j++ )
     {
       cout << largec;
     }
  cout << smallc ;
  
  }
for( int j=0 ; j < k ; j++ )
     {
       cout << largec;
     }
}

else{

while( smalli > 0 )

{
for( int j=0 ; j < conprint+1 ; j++ )
     {
       cout << largec;
       largei--;
     }
cout << smallc;
smalli--;
for( int j=0 ; j < conprint ; j++ )
     {
       cout << largec;
       largei--;
     }
if(smalli >0){cout << smallc;
smalli--;}



}

while( largei >0 )
{cout << largec;
largei--;}
		



}

















return 0;

 } 

