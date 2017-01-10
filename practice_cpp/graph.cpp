#include<iostream>
#include<vector>
#include <queue>
#include<algorithm>  
using namespace std;

class Graph {
	public:
		int V ;
		vector <int> ** adjlist;

		Graph ( int V )
		{		
			this -> V = V;
			adjlist = new vector<int>* [V];

			for( int i =0 ; i< V ;i++ )
				adjlist[i] = new vector <int> ;

		}	


		void addedge( int v1 , int v2 )
		{

			(*(adjlist[v1])).push_back(v2); 
			if( v2 != v1 )
				(*(adjlist[v2])).push_back(v1);

		}
		void printg ()
		{

			for ( int i =0 ; i < V; i++ )
			{
				cout << i<< "  ";

				for ( int j=0 ; j < (*(adjlist [i])).size() ; j++ )     
				{
					cout << (*(adjlist[i]))[j] << ' ';
				}

				cout << endl;
			}


		}	



};
int*  BFS (Graph  g  , int v ) 
{	int* dis ;
	dis = ( int*) malloc ( sizeof( int) * g.V ) ;
	int di=0;
	fill_n ( dis , g.V , g.V );	
	queue<int>  q;
	dis[v] = 0 ; 
	q.push(v);
	while (! q.empty() )
	{  di++;
		int coun = 0,nu = (*g.adjlist[q.front()]).size() ;

		for( int y=0; y < nu ; y++ ) 
		{ if ( dis[(*g.adjlist[q.front()])[y]] == g.V )
			{
				dis[(*g.adjlist[q.front()])[y]] = di ;
				q.push( (*g.adjlist[q.front()])[y]);


			} 
                  else{  coun++;  } 


		}
		q.pop();
		if( coun == nu )
			di--;
	}

	return dis;

}
void  DFS1 ( Graph g ,int v , int* vis , int* dfn_ref   );
int* DFS ( Graph g , int v )
{

	int* vis = (int*) malloc ( g.V * sizeof(int))  ;
	for( int i=0 ; i< g.V ;i++)
	{
		vis[i] = 0 ;
	}


	int dfn = 1 ;
	DFS1(g, v ,vis, &dfn );
	return vis;






}

void  DFS1 ( Graph g ,int v , int* vis , int* dfn_ref  )
{  

	vis[v] = (*dfn_ref);
	(*dfn_ref)++ ;

	for( int i=0 ; i < (*g.adjlist[v]).size() ; i++ ) 
	{
		if( vis[(*g.adjlist[v])[i]] == 0 )
			DFS1( g , (*g.adjlist[v])[i] , vis , dfn_ref );

	}



}

int main()
{
	int vertex;
	cin >>  vertex;
	int E,v1,v2;
	cin >> E ;


	Graph g(vertex) ;
	for( int i =0 ; i < E ; i ++ ) 

	{cin >> v1 >> v2 ;	
		g.addedge(v1 , v2 ) ;
	}


	cout << "graph : " << endl;
	g.printg();
	cout << endl;



	cout << "BFS distance ";
	int* dis = BFS(g,0);

	for( int j=0; j < g.V  ;j++ ) 
		cout << dis[j] << " "  ;
	cout << endl;


	cout << "DFS dfn number "<< endl ;		
	int* dfn = DFS ( g , 0 ) ; 
	for( int t=0 ; t < g.V ; t++ )
		cout << dfn[t] << " " ;	




	return 0;

} 

