
/*
2015-01-15 01:29
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

	int n;
	cin>>n;
	vector<int>a(n);
	FOR(i,n)
		cin>>a[i];
	int x=a[0],cars=1;
	FORS(i,1,n){
		if(a[i]<x)
			cars++;
		if(a[i]<x)
		x=a[i];
	}
	cout<<cars<<"\n";
}

int main(){ _

	SOLVE()

	return 0;
}
