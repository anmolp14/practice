#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
  ifstream cin("chairs.in");
  ofstream cout("chairs.out");
 
  int a,b,c;
  double  d;
cin >> a >> b >> c ;
d = (a + b +c ) / 6.0 ;
cout <<setprecision(9)<< d << endl ;


return 0;
}




