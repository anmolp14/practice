#include <fstream>
#include <string>
#include <map>
#include <utility>
using namespace std;
int lasum ( map < char , pair <int , int > > mat )
{ char nw , ol ;
	int sum = 0 ;
	cin >> noskipws >> ol;
   while ( 1 ) 
      {
         cin >> noskipws >> nw;
            
         ol = nw ;

       }


}


int main()
{
  ifstream cin("template.in");
  ofstream cout ("template.out");
int lx,ly,i,j,ll1,ll2,ll3;
char a;

cin >> lx >> ly;
map < char , pair <int , int > > mat ;
cin >> noskpws >> a;
for (  i=1 ; i<=ly ; i++ )
{
   for ( j=1 ; j<=lx ; j++ )
   {
     cin >> noskipws >> a ;
     mat[a].first = j;
     mat[a].second = i;

   }
cin >> noskipws >> a;
}

cin >> noskipws >> a;
string lang1,lang2,lang3;
getline (cin , lang1);
cin >> noskipws >> a;
ll1 = lasum( mat );

getline (cin , lang2);
cin >> noskipws >> a;
ll2 = lasum( mat );

getline (cin , lang3);
cin >> noskipws >> a;
ll3 = lasum( mat );

return 0;
}
