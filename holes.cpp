
/*
2015-01-14 12:49
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

	string s;
	cin>>s;
	int ans=0;
	FOR(i,s.length()){
		if(s[i]=='A' || s[i]=='D' || s[i]=='O'  || s[i]=='P'  || s[i]=='Q'  || s[i]=='R')
			ans++;
		if(s[i]=='B')
			ans+=2;
	}
	cout<<ans<<endl;
}

int main(){ _

	SOLVE()

	return 0;
}
