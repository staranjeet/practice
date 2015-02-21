
/*
2015-02-21 16:34
practice
FEB 15
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

	string a,b;
	cin>>a>>b;
	int c[26]={0};
	FOR(i,a.length())
		c[a[i]-97]++;
	FOR(i,b.length())
		c[b[i]-97]--;
	bool flag=true;
	FOR(i,26){
		if(c[i]!=0){
			flag=false;
			cout<<"NO\n";break;
		}
	}
	if(flag)
		cout<<"YES\n";
}	

int main(){ _

	SOLVE()

	return 0;
}
