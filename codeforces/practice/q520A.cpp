#include <iostream>
#include <string>
#include <algorithm> 
#include <iterator>
#include <stdlib.h> 
#include<stdio.h>
using namespace std;






int main()

{
	int n;
	cin >> n;
	if ( n < 26)
	{  cout << "NO" ;
		return 0;}

	int a[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

	string s;
	cin >> s;  
	for(int i=0;i<n;i++ )
	{
		a[ tolower(s[i])-97] +=1 ; 
	}
	

sort ( a , a+26 ) ;

	if ( a[0] )
		cout << "YES";
	else { cout << "NO"; }  

	return 0;
}
