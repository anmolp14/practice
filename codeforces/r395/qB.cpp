#include<iostream>

using namespace std;

int main()
 {

int n;
cin >> n;
long int a[n], temp;
for( int i=0;i<n;i++)
	cin >> a[i];

for( int j=0;j<n/2;j+=2)
{  
    temp= a[j];
  a[j] =  a[n-j-1];
  a[n-j-1] = temp ;
 


}

for( int i=0;i<n;i++)
	cout << a[i]<< ' ';





return 0;

 } 

