
/*
2015-01-17 11:02
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

void solve(){

	string s;
	cin>>s;
	ll ans = 1;
	FOR(i,s.length()){
		if(i%2==0){
			if(s[i]=='l')
				ans=(ans*2)%MOD;
			else
				ans=((ans*2)%MOD+2)%MOD;
		}
		else{
			if(s[i]=='l')
				ans=(((ans*2)%MOD)-1)%MOD;
			else
				ans=(((ans*2)%MOD)+1)%MOD;
		}
	}
	cout<<ans<<endl;
}

int main(){ _

	SOLVE()

	return 0;
}
