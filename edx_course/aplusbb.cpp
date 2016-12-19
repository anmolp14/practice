#include<fstream>
using namespace std;
int main()
{  
   ifstream cin("aplusbb.in");
  ofstream cout("aplusbb.out");
 long long int a,b;
 cin >> a >> b;
 cout << a + b*b << endl;




	return 0;
}
