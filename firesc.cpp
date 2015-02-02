
/*
2015-02-02 19:58
practice
FEB 15
First graph problem!!
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
#define MOD 1000000007

vector<vector<int> >graph;
vector<bool>visited;
int elements;

void dfs(int n){
	visited[n]=true;
	FOR(i,graph[n].size()){
		if(!visited[graph[n][i]])
		{
			elements++;
			dfs(graph[n][i]);
		}
	}
}


void solve(){

	int n,m,a,b;
	cin>>n>>m;
	graph.resize(n);
	visited.resize(n);
	FOR(i,n){
		visited[i]=false;
		graph[i].clear();
	}

	FOR(i,m){

		cin>>a>>b;
		a--;b--;
		graph[a].PB(b);
		graph[b].PB(a);
	}
	int count = 0;
	ll ans = 1;
	FOR(i,n){
		if(!visited[i]){
			elements = 1;
			dfs(i);
			count++;
			ans = (ans*elements)%MOD;
		}
	}
	cout<<count<<" "<<ans<<endl;
}

int main(){ _

	SOLVE()

	return 0;
}
