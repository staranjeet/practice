
/*
2015-01-17 14:54
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
	vector<int>a(n);
	vector<int>b,c;
	cin>>n;
	FOR(i,n)
		cin>>a[i];
	int pivot = a[0];
	FORS(i,1,n){
		if(a[i]<pivot)
			b.PB(a[i]);
	}
	FORS(i,1,n){
		if(a[i]>pivot)
			c.PB(a[i]);
	}
	FOR(i,b.size())
	cout<<b[i]<<" ";
	cout<<pivot<<" ";
	FOR(i,c.size())
	cout<<c[i]<<" ";
}

int main(){ _

	solve();
	//SOLVE()

	return 0;
}
