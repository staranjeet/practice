
/*
2015-02-01 13:38
practice
JAN 15
*/
/*
Considering a Undirected graph
*/
#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long int ll;

#define FOR(i,n) for(int i = 0; i < n; i++)
#define FORS(i,a,n) for(int i = a; i < n; i++)
#define RDARR(a,n) FOR(i,n) cin>>a[i];
#define SOLVE() int t;cin>>t;FOR(tc,t) solve();
#define PB push_back

vector<list<int> > graph;
vector<bool>visited;

void addEdge(int source, int node){

	graph[source].PB(node);
	graph[node].PB(source);

}

void bfs(int start,int n){

	
	list<int>queue;
	list<int>::iterator it;
	//enque the source vertex
	queue.PB(start);

	while(!queue.empty()){

		int node = queue.front();
		cout<<node<<" ";
		visited[node]=true;
		queue.pop_front();

		for(it=graph[node].begin();it!=graph[node].end();it++){

			int tempNode= (*it);
			if(!visited[tempNode]){
				visited[tempNode]=true;
				queue.PB(tempNode);
			}

		}

	}

}


void printGraph(int n){


	list<int>::iterator it;
	FOR(i,n){
		cout<<i<<" : ";

		for(it=graph[i].begin();it!=graph[i].end();it++)
			cout<<(*it)<<" ";
		
		cout<<endl;
	}
}
void solve(){
}

int main(){ _

	//SOLVE()
	int n = 5;
	graph.resize(n);
	visited.resize(n);
	FOR(i,n)
		visited[i]=false;
	addEdge(0,1);
	addEdge(0,2);

	addEdge(3,4);
	printGraph(n);

	/*for bfs from a single node*/
	bfs(0,n);		

	/* bfs of all nodes (will show all components) */
	/*FOR(i,n){
		if(!visited[i])
			{bfs(i,n);
				cout<<endl;}
	}*/




	return 0;
}
