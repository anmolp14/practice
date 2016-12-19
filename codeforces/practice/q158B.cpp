#include<iostream>

using namespace std;

int main()
{ int n,a,sum=0,s3=0,s2=0,s1=0 ;
	
  cin >> n;
for (int i=0;i<n;i++)
{
  cin >> a;
 if ( a == 4)
	 sum+= 1 ;
 else if ( a==3)
	s3 += 1; 
else if ( a==2)
	s2 += 1 ;
 else { s1 += 1;} 		

}	


sum += s3;
if ( s1 > s3 )
	s1 =  s1 - s3 ;
else { s1=0;}	
if ( s2 % 2 != 0)
   {
     s1 = s1+2 ;
   }
    sum += s2/2 ; 
   
sum+= s1/4 ;

if( s1 % 4 !=0 ) 
	sum+=1;





cout << sum;





return 0;	}
