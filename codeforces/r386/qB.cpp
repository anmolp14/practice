#include<iostream>
#include <stdlib.h>
using namespace std;
struct node {

	char data;
	struct node * nex ;

};
void deleteNode(struct node *head, struct node *n)
{
	if(head == n)
	{

		head->data = head->nex->data;

		n = head->nex;

		head->nex = head->nex->nex;

		free(n);

		return;
	}



	struct node *prev = head;
	while(prev->nex != NULL && prev->nex != n)
		prev = prev->nex;
	prev->nex = prev->nex->nex;

	free(n);

	return; 
}
void decode ( struct node ** headref , int n )
{  
	if ( n == 0 )
		return;
	if( n==1 )
	{cout <<   (*headref)->data ;  
		return;}
	int i, num = (n%2 != 0) ? n/2+1 : n/2+1 ;
	struct node * fi = (*headref);
	
	for (  i=0 ; i < num-1 ; i++ )
	{
	
		fi = fi -> nex ;
	
	}

	cout << fi -> data ;

deleteNode( (*headref) , fi ) ;
decode ( headref , n-1) ; 
}



void insertn ( struct node ** headref , char newval )

{
	struct node * newnode= ( struct node * ) malloc ( sizeof( struct node))  ;
	newnode -> data = newval ;
	newnode -> nex = (*headref ) ;
	(*headref) = newnode ;
}

void printlist( struct node * a)
{
	if (a== NULL )
		return;
	cout << a -> data<< ' ' ;
	printlist( a -> nex ) ;



}



int main()
{
	int n;
	char a;
	cin >> n ;
	struct node * head ;
	for( int i=0;i<n;i++)
	{
		cin >> a;
		insertn( &head , a); }


decode ( &head , n ) ; 






	return 0;

} 

