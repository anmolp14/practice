#include<stdio.h>
#include<string.h>

int f=0;
int k;

void flip(int i, char * s){
	for(int j=i;j<i+k;j++){
		if(s[j]=='+')
			s[j]='-';
		else if(s[j]=='-'){
			s[j]='+';
		}	
	}
	f++;
}

void check(char* s, int start, int end){
	if(start==end)
		return;
	int i=start;
	while(i<end){
		if(s[i]=='-')
			break;
		i++;
	}
	if(i==end)
		return;
    if(i+k>end){
		f=-1;
		return;
	}
	else{
		flip(i,s);
		check(s,i+1,end);
	}
}

int main(){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		char s[1001];
		scanf("%s",s);
		scanf("%d",&k);
        int length=strlen(s);
        check(s,0,length);
		printf("Case #%d: ",i+1);
		if(f<0){
			printf("IMPOSSIBLE\n");
		}
		else{
			printf("%d\n",f);
		}
		f=0;
	}
	return 0;
}
