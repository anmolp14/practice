#include<iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
 {
 stack <char> frnt ;
queue < char > end ; 
 int n ;char mid ;
 cin >> n ;
 if ( n % 2 != 0 )
	 cin >> mid ; 
 char a ;
 
for ( int i = 0 ; i < n/2 ; i++ )
{

cin >> a;
frnt.push(a) ;
cin >> a ;
end.push(a);
}

for ( int j =0 ; j < n/2; j++ ) 
{
  cout << frnt.top();
  frnt.pop();

}

 if ( n % 2 != 0 )
	 cout <<  mid ;
for ( int j =0 ; j < n/2; j++ ) 
{
  cout << end.front();
  end.pop(); 

}



return 0;

 } 

