
/*
2015-05-23 23:42
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

	FOR(i,s.size()){
		if(s[i]>=97 && s[i]<=122 && i==0)
			s[i]-=32;
		cout<<s[i];
	}
	cout<<"\n";

}

int main(){ _

	//SOLVE()
	solve();
	return 0;
}
