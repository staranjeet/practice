
/*
2015-05-23 12:28
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

	string s,t;
	cin>>s>>t;

	FOR(i,s.length())
		if(s[i]>=65 && s[i]<=90)
			s[i]+=32;

	FOR(i,t.length())
		if(t[i]>=65 && t[i]<=90)
			t[i]+=32;
	if(s.compare(t)>0)
		cout<<"1\n";
	else if (s.compare(t)<0)
		cout<<"-1\n";
	else
		cout<<"0\n";
}

int main(){ _

	//SOLVE()
	solve();
	return 0;
}
