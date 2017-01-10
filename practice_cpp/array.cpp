#include<iostream>
#include<stdlib.h>
using namespace std;

int* c( int n)

{  int *d;
	
   d = (int*) malloc ( sizeof(int)* n );

   for(int i=0;i<n;i++)
   {
       d[i]= i;
     
    
   
   }
 
return d;

}

int main()
 {

int*a ;
a = c(4);

for( int j=0;j < 4;j++ )
{
cout << a[j];

}









return 0;

 } 

