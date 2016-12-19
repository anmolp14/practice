#include<iostream>

using namespace std;


int main()

{   
 long  int n;
   
   cin >> n;
   if(n>=0)
   { cout << n;
	   return 0;}
   n=-n;
   int la = n%10;
   int la2 = (n%100) / 10;
    
   int mini ;
  mini = (la > la2)  ? la2 : la ; 
  if ( n/100 !=0)
cout << -(n/100) << mini ;
  else{ cout <<- mini;} 

	return 0;
}
