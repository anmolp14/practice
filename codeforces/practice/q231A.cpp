#include<iostream>

using namespace std;

int main()

{ int sum=0;
 int n ;
 cin >>  n;
for ( int i =0;i<n;i++)

{ 
  int a,b,c ;
 cin >>  a;
cin >> b;
cin >> c;
 
if ( a+b+c > 1)
	sum+=1;

}

cout << sum;



return 0;	}
