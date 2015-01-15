
/*
2015-01-15 11:09
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
}

int main(){ _

	//SOLVE()
	int a,n,k;
	cin>>a>>n>>k;
	FOR(i,k){
		cout<<a%(n+1)<<" ";
		a=a/(n+1);
	}

	return 0;
}
