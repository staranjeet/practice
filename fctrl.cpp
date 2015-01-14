
/*
2015-01-14 11:16
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

void solve(){
	ll n,temp;
	cin>>n;
	temp=n;
	ll ans=0,prod=5;
	while(temp){
		temp=n/prod;
		ans +=(temp);
		prod*=5;
	}
	cout<<ans<<endl;
}

int main(){ _

	SOLVE()

	return 0;
}
