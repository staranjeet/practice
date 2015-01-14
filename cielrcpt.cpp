
/*
2015-01-14 22:19
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

	int n,ans=0,x,y;
	cin>>n;
	ans+=(n/2048);
	x=n%2048;
	
	bitset<32> bi=x;
	ans+=(bi.count());
	cout<<ans<<endl;
}

int main(){ _

	SOLVE()

	return 0;
}
