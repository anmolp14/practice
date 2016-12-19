#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main() 

{ int s1=0,s0=0 ;
  char a;
	string s;
cin >> s;
      	for (int i=0; i<s.length();i++  )
  { 
    
    if (s[i]=='1')
    {s0 =0;
     
     s1+= 1 ;

    }	    
    if (s[i] =='0')
    { s1 = 0;
      s0+=1;	    
    }

    
  if( s1 >= 7 || s0>= 7 )
      {	cout << "YES";
      
	      return 0;
      }  
  
  }
 
 cout << "NO";





return 0;
}
