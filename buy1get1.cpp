
/*
2015-01-15 00:43
practice
JAN 15
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
	int jewel[65]={0};
	string s;
	cin>>s;
	FOR(i,s.length()){
		jewel[s[i]-65]++;
	}
	int cost=0;
	FOR(i,65){
		cost+=ceil((double)jewel[i]/2);
	}
	cout<<cost<<endl;
}

int main(){ _

	SOLVE()

	return 0;
}
