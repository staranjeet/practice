
/*
2015-01-15 13:23
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

	int count[26]={0};
	string s;
	cin>>s;
	int len=s.length();
	FOR(i,len/2)
		count[s[i]-97]++;
	if(len&1)
		len++;
	FORS(i,len/2,s.length()){
		count[s[i]-97]--;
	}
	bool flag=true;
	FOR(i,26){
		if(count[i]){
			flag=false;
			break;
		}
	}
	string ans=(flag)?"YES":"NO";
	cout<<ans<<endl;
}

int main(){ _

	SOLVE()

	return 0;
}
