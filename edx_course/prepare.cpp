//#include <fstream>
#include<iostream>
#include <algorithm>
#include <cmath> 
using namespace std;

int main()
{ 
 // ifstream cin("prepare.in");
 // ofstream cout("prepare.out");
  
  int n;
  cin >> n;
  int a[n],b[n],sum=0,mind=0 ;
  for(int i=0;i<n;i++)
  {
  cin >> a[i] ; 	

  }


  for(int i=0;i<n;i++)
  {
	cin >> b[i];

  }


  for(int i=0;i<n;i++)
  {    
	sum+= max(a[i] , b[i] );
	mind = min ( mind , abs(a[i]-b[i]) ); 

  }

cout << sum - mind ; 
	return 0;
}

