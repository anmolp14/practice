#include<iostream>

using namespace std;

int main()
 {
 int countn=0, n,e,ba,ch;

cin >> e >> n;

ba = max( e,n);
ch = min(e,n);

while( ba != ch && ba != 0 && ch != 0   )
{
  ba-=2;
  ch--;
  countn++ ;

}

while ( ba >= 3 &&  ba != 0 && ch != 0 )
{
   ba-=3;
   ch-=3;
  countn+=2;


}

if( ba != 0 && ch!=0 && ba ==2 )
	countn++;

	cout << countn;

return 0;

 } 

