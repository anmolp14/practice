#include<iostream>

using namespace std;

int main()
 {
int a,b,c;
cin >> a >> b >> c ;
int fina,a1 , b1, c1,mini=0;

a1 =a;
b1 = b/2;
c1 = c/4;

mini = min ( a1 , min( b1 , c1 ));
fina = 7 * mini ;
cout << fina; 






return 0;

 } 

