
/*
2015-01-16 11:06
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

	ll c=2;
	int diff;
	string s;
	cin>>s;
	FORS(i,1,s.length()){
		diff=s[i]-s[i-1];
		if(diff<0)
			diff+=26;
		c+=diff;
		c++;
	}
	if(c<=(11*s.length()))
		cout<<"YES\n";
	else
		cout<<"NO\n";
}

int main(){ _

	SOLVE()

	return 0;
}
