
/*
2015-01-17 00:29
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

	int n,x;
	cin>>n;
	//vector<int>a(n);
	set<int>apple;
	FOR(i,n){
		cin>>x;
		apple.insert(x);
	}
	cout<<apple.size()<<endl;

}

int main(){ _

	SOLVE()

	return 0;
}
