#include<iostream>
#include<algorithm>
using namespace std;

int main()
 {
  int n;
  cin >>  n; 
 long int a[n];
 for ( int o=0 ;o < n ; o++ )
 {
  cin >> a[o];
 } 
 sort ( a , a+n );
 long int s;

 int i =1 , j=2;
 while( i < n && j < n )
 {
  s = a[i];
 a[i] = a[j];
 a[j] = s;   
   
 i+=2;
 j+=2;
 
 }

 for ( int o=0 ;o < n ; o++ )
 {
  cout <<  a[o] << " " ;
 } 

return 0;

 } 

