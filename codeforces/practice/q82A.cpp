#include <iostream>

using namespace std;


int main()
{
int n;
cin >> n ;

int q,x=1 ;
q= n/5;

while(q >= x )
{
   x= x * 2 ;                  
                    

}
int m,order;
x=x/2;

m = n- 5*x+5;
if(x!=0)
{   if(m%x!=0)
	order = m/ x+1;
   else
   { order = m/x;
   }
}	
	else
order = m ;
if(order!=5)
	order = order % 5 ;
string s[]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
cout << s [ order -1 ] ;

	return 0;


}
