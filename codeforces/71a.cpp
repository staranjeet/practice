
/*
2015-05-22 14:48
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

		string s;
		cin>>s;
		int l=s.length();
		if(l<=10)
			cout<<s<<"\n";
		else
			cout<<s[0]<<l-2<<s[l-1]<<"\n";

}

int main(){ _

	SOLVE()
	//solve();
	return 0;
}
