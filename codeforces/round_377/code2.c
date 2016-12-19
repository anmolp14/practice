#include<stdio.h>

int main()
{int n,j,k,c=0 ;

scanf("%d%d",&n,&k);
int a[n];
for ( int i=0 ; i<n ; i++ )
    { scanf("%d", &a[i]);

     }

 for (int i=1 ; i<n ; i++ )
   {
      j = a[i]+a[i-1];
      if (k-j > 0)
        {
          a[i]=a[i] + k - j ;
          c+= k - j ;
         }
     

     } 
 printf("%d \n",c);
for ( int i=0 ; i<n ; i++ )
    { printf("%d ", a[i]);
     } 


  return 0;
            }

