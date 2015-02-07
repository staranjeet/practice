
/*
2015-02-07 22:31

FEB 15
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
	int n,k,x,max=0;
	ll ans=1;
	cin>>n>>k;
	FOR(i,k){
		cin>>x;
		if(x>max)
			max=x;
	}
	FORS(i,1,n+1)
	ans=(ans*i)%max;
	cout<<ans<<endl;
}

int main(){ _

	SOLVE()

	return 0;
}
