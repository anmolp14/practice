#include<stdio.h>

int main()
  { int k,j, r, n;
    scanf("%d%d",&k,&r);
    for (int i=1;i<=9;i++)
      {   
         j = i* k;
         if (j%10 == r || j%10 == 0)
          { printf("%d",i);
            return 0;   
          }

      }  
    printf("10"); 

    return 0;
 }
