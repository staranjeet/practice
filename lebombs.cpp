
/*
2015-01-16 03:51
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

	int n;
	string s;
	cin>>n>>s;
	FOR(i,s.length()){
		if(s[i]=='1'){
			s[i]='*';
			if(i>=1 && s[i-1]=='0')
				s[i-1]='*';
			if(i+1<n && s[i+1]=='0')
				s[i+1]='*';
		}
	}
	int c = 0;
	FOR(i,s.length()){
		if(s[i]!='*')
			c++;
	}
	cout<<c<<endl;

}

int main(){ _

	SOLVE()

	return 0;
}
