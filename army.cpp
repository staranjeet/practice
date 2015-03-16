
/*
2015-03-16 22:41
sopj
MAR 15
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

void solve(){

	int g,m;
	cin>>g>>m;

	vector<int>G(g),M(m);
	FOR(i,g)
	cin>>G[i];
	FOR(i,m)
	cin>>M[i];

	sort(G.begin(),G.end());
	sort(M.begin(),M.end());

	int i=0,j=0,cm=m,cn=g;
	while(i<g && j<m){
		if(G[i]<M[j]){
			i++;
			cm--;
		}
		else if(M[j]<=G[i]){
			j++;
			cn--;
		}
		/*else{
			i++;j++;cm--;
			cn--;
		}*/
	}
	/*if(i==j && i==)
		cout<<"uncertain\n";
*/	if(j==m)
		cout<<"Godzilla\n";
	else if(i==g)
		cout<<"MechaGodzilla\n";
	else
		cout<<"uncertain\n";


}

int main(){ _

	SOLVE()

	return 0;
}
