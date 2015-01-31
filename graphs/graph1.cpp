
/*
2015-01-31 20:26

JAN 15
*/
/*
Graph Tutorial : Using adjacency matrix to represent graph
Complexity : O()
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

vector<list<int> >graph;
void solve(){
}

void addEdge(int vertex, int node){			// add node in list of vertice

	graph[vertex].PB(node);
	graph[node].PB(vertex);
}

void printGraph(int n){

	FOR(i,n){
		cout<<i<<" : ";
		list<int>:: iterator it;
		for(it=graph[i].begin();it!=graph[i].end();it++)
			cout<<(*it)<<" ";
		/*FOR(j,graph[i].size()){
			cout<<graph[i][j]<<" ";
		}*/
		cout<<"\n";
	}
}
int main(){ _

	//SOLVE()
	int n;
	cout<<"Enter number of vertices : ";
	cin>>n;
	graph.resize(n);
	cout<<"Assuming vertices no from 0 to "<<n-1<<"\n";
	addEdge( 0, 1);
    addEdge( 0, 4);
    addEdge( 1, 2);
    addEdge( 1, 3);
    addEdge( 1, 4);
    addEdge( 2, 3);
    addEdge( 3, 4);
    printGraph(n);
 

	return 0;
}
