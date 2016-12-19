#include<stdio.h>
#include<stdlib.h>

long long int max ( long long int a , long long int b )
         {

             return a > b ? a : b; 

   }




int main()



     { long long int c,b,d,s;
       scanf("%lld%lld%lld",&b,&d,&s);
          c = max(b ,d);
          c =  max ( c ,s );
       
       if( b==d && b==s)
         { 
            printf("0"); 
          }
 
      else if((b==d && b>s) || (b==s && b>d) || (d==s && d>b)   )
        { 
          printf("%lld", 3*c -1 -b-d-s);
        }
      else
      {
              printf("%lld",3*c-2-b-d-s);
       }
     return 0;}

