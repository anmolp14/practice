#include <iostream>
#include <ctype.h>
#include <string>
using namespace std;
int check( string a)
{
    for(int i=1 ; i<a.length() ;i++ )
    {
        if(!isupper( a[i] ))
           return 0; 
      
    }
return 1;

}

string ulta( string a ,int n)
{
     for(int i=n ; i<a.length() ;i++ )
    {
        if(isupper( a[i] ))
           a[i]=tolower(a[i]) ; 
        else 
          a[i]=toupper(a[i]) ; 
    }
return a;
}
int main()

{
 string s;
 cin >>  s;
if ( isupper(s[0]))
{ string g;
  if(check(s)) 
      s=	ulta(s,0);  
 
}
else
{
  if(check(s))
       s =ulta(s,0);
   
}

 cout << s; 
return 0;
}
