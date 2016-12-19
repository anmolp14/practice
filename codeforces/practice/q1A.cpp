#include<iostream>

using namespace std;

int main()


{long long int n,m,a;
	
 cin >> n >> m >> a ;
long long int sum=0;
long long int sn=0,sm=0;
sn= n/a ; sm = m/a ; 

if ( n%a !=0)
{	sn+=1;}

if (m%a != 0)
{ sm+=1;}

 sum= sn * sm ; 

cout << sum;
       	return 0;
}

