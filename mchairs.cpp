
/*
2015-01-17 16:09
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

#define MOD 1000000007

ll power(ll base, ll exp){
	ll ans=1;
	while(exp){
		if(exp&1)
			ans=(ans*base)%MOD;
		base=(base*base)%MOD;
		exp>>=1;
	}
	return ans;
}
void solve(){

	ll n;
	cin>>n;
	cout<<power(2,n)-1<<endl;

}

int main(){ _

	SOLVE()

	return 0;
}
