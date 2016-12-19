#include <iostream>
#include <algorithm>
#include<iomanip> 
using namespace std;

int main()

{
  int n,n1,n2;
  cin >> n >> n1 >> n2 ;
  int arr[n];
  for (int i=0;i<n;i++)
  {
     cin >> arr[i];

  }

sort (arr , arr+n,greater<int>());
int sa1=0,sa2=0;
if (n1 > n2)
{
int   temp = n2;
   n2 = n1;
   n1= temp;

}

for(int i=0;i<n1;i++)
  {
      sa1+=arr[i];


  }
for(int i=n1;i<n2+n1;i++)
  {
      sa2+=arr[i];


  }
long long int sr = n1 * n2,st = sa1 * n2 + sa2 * n1 ;
 double sum= (st) / (sr);

cout  << setprecision(8) << fixed << sum;
return 0;
}

