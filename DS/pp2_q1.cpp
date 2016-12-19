#include<iostream>
#include <stdlib.h>
using namespace std;
struct node {

	int data;
	struct node * nex ;

};

void reversell( struct node ** head, struct node * a)
{  
	if(((*head) == a))
		return;
	if( a != NULL &&   a -> nex ==( *head) )
		return ; 
	struct node * temp = (*head) ;
	while ( temp -> nex != a ) 
	{
		temp = temp -> nex;

	}
	reversell ( &((*head) -> nex) , temp );
	int t;
	t = (*head) -> data ;
	( *head) -> data = temp -> data ; 
	temp -> data = t ;
}


void insertn ( struct node ** headref , int newval )

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

	struct node * head ;
	head = NULL ;
	insertn( &head , 8 );
	insertn( &head , 4 );
	insertn( &head , 2 );
	insertn( &head , 1 );
	insertn( &head , 0 );

	printlist (head);
	cout << '\n' ;
	reversell ( &head , NULL ) ; 
	printlist( head );








	return 0;

} 

