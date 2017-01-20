#include<iostream>
#include<algorithm>
using namespace std;

int main()
 {
int n;
cin >> n;
int maxi=0;
int a[n];
int sum=0;
for( int i=0 ; i< n;i++ )
{cin >> a[i];
   sum+=a[i];
if( a[i] > maxi )
	maxi = a[i];

}


int net =  (n) * maxi - sum ;
cout << net ;








return 0;

 } 

