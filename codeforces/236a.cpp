
/*
2015-05-24 00:08
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
	set<char>t;
	FOR(i,s.length())
	t.insert(s[i]);

	if((t.size())&1)
		cout<<"IGNORE HIM!\n";
	else
		cout<<"CHAT WITH HER!\n";


}

int main(){ _

	//SOLVE()
	solve();
	return 0;
}
