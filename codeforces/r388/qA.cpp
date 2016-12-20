#include<iostream>

using namespace std;

int main()
{

	int n,coun=0 ;
	cin >> n;
	while ( n!=0 &&  n!=3 )
	{  coun++;
		n=n-2;
	}
	if( n == 3 ) 
		coun++;
	cout << coun << endl;
	if( n==3 )
		coun--;
	for ( int i=0;i< coun ;i++ )
		cout << "2 ";
	if(n==3)
		cout << 3; 





	return 0;

} 

