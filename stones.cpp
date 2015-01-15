
/*
2015-01-15 18:51
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

	string J,S;
	cin>>J>>S;
	int c=0;
	set<char>jewels;
	FOR(i,J.length()){
		jewels.insert(J[i]);
	}
	set<char>::iterator it;
	for(it=jewels.begin();it!=jewels.end();it++){
		FOR(j,S.length())
			if((*it)==S[j])
				c++;
	}
	cout<<c<<endl;
}

int main(){ _

	SOLVE()

	return 0;
}
