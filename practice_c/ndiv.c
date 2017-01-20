#include<stdio.h>
int main(int argc, char const *argv[])
{
	int i,j,k,ct=0;
	scanf("%d%d%d",&i,&j,&k);
	for (int a = i; a <= j; a++)
	 {   int count=0;
			        for (int b = 1; b <= a; b++)
				 { 
			        if(a%b==0)
                        count++;   

				 	/* code */
				 } 
			   
          if (count==k) 
              ct++;    
	 	/* code */
	 } 
   
printf("%d",ct );







	/* code */
	return 0;
}