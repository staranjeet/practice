
/*
2015-01-15 20:30
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

	int n,k;
	cin>>n>>k;
	ll total = 0;
	vector<int>a(n);
	FOR(i,n){

		cin>>a[i];
		total+=a[i];
	}
	sort(a.begin(),a.end());
	if(k>n/2)k=n-k;

	ll kid = 0,father = 0;

	FOR(i,k)
		kid+=a[i];
	father=total-kid;
	cout<<abs(father-kid)<<endl;
}

int main(){ _

	SOLVE()

	return 0;
}
