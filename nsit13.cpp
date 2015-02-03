
/*
2015-02-04 01:12
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

	set<int>s;
	int x;
	FOR(i,10){
		cin>>x;
		s.insert(x%42);

	}
	cout<<s.size()<<endl;

}

int main(){ _

	//SOLVE()
	FOR(i,10)
	solve();

	return 0;
}
