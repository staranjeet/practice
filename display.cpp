
/*
2015-03-09 18:47
practice
MAR 15
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

	map<char,int>m;
	m['0']=6;
	m['1']=2;
	m['2']=5;
	m['3']=5;
	m['4']=4;
	m['5']=5;
	m['6']=6;
	m['7']=3;
	m['8']=7;
	m['9']=6;
	string s;
	int ans=0;
	cin>>s;
	FOR(i,s.length())
		ans+=m[s[i]];
	cout<<ans<<endl;
}

int main(){ _

	//SOLVE()
	solve();

	return 0;
}
