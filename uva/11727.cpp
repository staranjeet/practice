
/*
2015-02-23 13:53
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
	int t;
	cin>>t;
	vector<int>a(3);
	FOR(i,t){
		cin>>a[0]>>a[1]>>a[2];
		sort(a.begin(),a.end());

		printf("Case %d: %d\n",i+1,a[1]);
	}
}

int main(){ _

	solve();

	//SOLVE()

	return 0;
}
