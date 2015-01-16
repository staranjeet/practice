
/*
2015-01-16 14:15
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

	string s;
	ll a,b;
	cin>>s;
	int q;
	cin>>q;
	while(q--){
		cin>>a>>b;
		a--;b--;
		ll temp=s.length();
		a=a%temp;
		b=b%temp;
		if(s[a]==s[b])
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}
}

int main(){ _

	solve();

	//SOLVE()

	return 0;
}
