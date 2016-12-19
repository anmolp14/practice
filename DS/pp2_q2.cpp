#include<iostream>
#include <stdlib.h>
using namespace std;
struct node {

	int data;
	struct node * nex ;

};



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

void mergelist( struct node ** head1 , struct node ** head2, struct node ** head  )
{
	(*head) = ( (*head1) -> data <= (*head2) -> data ) ? (*head1) : (*head2) ;
	struct node * temp1 = (*head) -> nex ;
	struct node * temp2 = ( (*head) == (*head1) ) ? (*head2) : (*head1) ; 
	struct node ** tra = (& ( (*head) -> nex )) ;
	while (  temp1 != NULL && temp2 != NULL ) 
	{
		if( temp1 -> data  <= temp2 -> data ) 
		{ 
			(*tra) = temp1 ;
			(tra) =( &(temp1 -> nex)) ;
			temp1 = temp1 -> nex; 
		}

		else
		{

			(*tra) = temp2 ; 
			(tra) =(&( temp2 -> nex)) ;   
			temp2 = temp2 -> nex ; 
		}


	}
	while ( temp1 != NULL )
	{
		(*tra) = temp1 ;
		(tra) =(&( temp1 -> nex)) ;
		temp1 = temp1 -> nex; 


	}

	while ( temp2 != NULL )
	{
		(*tra) = temp2 ;
		(tra) =(&( temp2 -> nex)) ;
		temp2 = temp2 -> nex; 


	}

	(*tra) = NULL ;

}





int main () 
{   
	struct node * head1= NULL;

	insertn( &head1 , 9 ) ;
	insertn( &head1 , 8) ;
	insertn( &head1 , 6 ) ;
	insertn( &head1 , 4 ) ;
	insertn( &head1 , 2 ) ;

	struct node * head2= NULL;

	insertn( &head2 , 8 ) ;
	insertn( &head2 , 7) ;
	insertn( &head2 , 4 ) ;
	insertn( &head2 , 4 ) ;
	insertn( &head2 , 1 ) ;

	struct node * head = NULL ;

	mergelist ( &head1 , &head2 , &head );
	printlist ( head ) ; 

	return 0;
}


































