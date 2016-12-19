#include<iostream>
#include<cctype> 
using namespace std;

int main()

{
 char a= 'a';

     	while (cin >> a )

   {    
          a = tolower(a);
     if ( a == 'a' ||  a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'y' )
     {
       continue;
   }
   cout << '.';

     cout << a ;

   }



	return 0;
}
