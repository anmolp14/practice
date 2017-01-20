    	#include<stdio.h>
    int main(int argc, char const *argv[])
    { int n;
    	scanf("%d",&n);
    	float arr[n];
    	for(int p =0;p<n;p++)
    		scanf("%f",&arr[p]);

             	
        for(int i =0;i<n;i++)
        {       if(arr[i]==0)
                    printf("%d\n",0 );  
                    
               else{
                   int den=1,j=1,min=1;

                     while(!((arr[i]-(int)arr[i])== 0) )
                       {
                         arr[i]=arr[i]*10;
                         den=den*10;

                       }

                     int num = (int) arr[i];   
                     while( j <= den)
                        { if(num%j==0 && den%j==0)
                              min=j;
                         j++;
                        }  
                     printf("%d\n",den );
                     printf("%d\n",min );
                     printf("%d\n",den/min); 
                 }
        }

     return 0;
    }