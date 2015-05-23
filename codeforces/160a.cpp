
/*
2015-05-23 23:47
MAY 15
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

	int n,s=0,c=0,t;
	cin>>n;
	vector<int>a(n);
	FOR(i,n){
	cin>>a[i];
	s+=a[i];	
	}
	sort(a.rbegin(),a.rend());
	s=s>>1;
	FOR(i,n){
		t+=a[i];
		c++;
		if(t>s)
			break;
	}
	cout<<c<<"\n";

}

int main(){ _

	//SOLVE()
	solve();
	return 0;
}
