#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using  namespace std;

int main() {
//	string s;

//	cin >> s;
   char d;
	int a[8]= {0};
//	int siz = s.length();
	cin >> d;
for(int i=0 ;i < 100000; i++ ){	        
		if (d == 'B' )
	        	a[0]++;
		else		if ( d == 'u' )
			a[1]++;
		else	if (d == 'l' )
			a[2]++;
		else	if (d == 'b' )
			a[3]++;
		else	if (d == 'a' )
			a[4]++;
		else	if (d == 's' )
			a[5]++;
		else	if (d == 'u' )
			a[6]++;
		else if(d == 'r' )
			a[7]++;
cin >> d;
	}
	a[4]= a[4]/2;
	sort ( a , a+8 );
  cout << a[0];

	return 0;
	}
